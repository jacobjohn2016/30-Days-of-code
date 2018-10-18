/*program to implement selective repeat in c*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int i, ch, sframe = 0;
double trigger = 3;
clock_t local_time_elapsed, t;

int ckframe(frame,msec,size)
{
    double msec2;
    if(frame == sframe & ch == 2)
    {
        printf("\nFrame %d lost/damaged\n",frame);
        frame += 1;
        t = clock();
        while (frame < size)
        {
            printf("\nSENDER: Sending frame %d", frame);
            for (i = 0; i < 1000000000; i++);
            local_time_elapsed = clock() - t;
            msec2 = ((double)local_time_elapsed) / CLOCKS_PER_SEC + msec;
            printf("\n %f seconds have elapsed", msec2);
            printf("\nRECEIVER: ACK %d", frame + 1);
            frame += 1;
        }
        printf("\nTimer runs out\n");
        printf("\nRECEIVER: NACK %d", sframe);
        printf("\nSENDER: Sending frame %d", sframe);
        return 1;
    }
    else
        return 0;
}

void send(n)
{
    sframe = rand() % (n / 2);
    int aframe = (rand() % (n / 2)) + 1;
    int sent = 0;
    double msec;
    while (sent < n / 2)
    {
        printf("\nSENDER: Sending frame %d", sent);
        printf("\nTimer has started");
        t = clock();
        do
        {
            for (i = 0; i < 1000000000; i++);
            local_time_elapsed = clock() - t;
            msec = ((double)local_time_elapsed) / CLOCKS_PER_SEC;
            printf("\n %f seconds have elapsed", msec);
        } while (msec < trigger);
        if(ckframe(sent, msec, n/2) == 0)
        {
            printf("\nRECEIVER: ACK %d", sent + 1);
            sent += 1;
        }
        else
            break;
        if(ch == 3 & sent + 1 == aframe)
        {
            printf("\nRECEIVER: ACK %d", sent + 1);
            local_time_elapsed = clock() - t;
            msec = ((double)local_time_elapsed) / CLOCKS_PER_SEC;
            printf("\n %f seconds have elapsed", msec);
            printf("\nTimer runs out");
            printf("\nSENDER: ACK %d not received", sent + 1);
            printf("\nSENDER: Retransmitting Frame %d", sent);
            printf("\nRECEIVER: ACK %d\n", sent + 1);
            sent += 1;
        }
    }
    printf("\n-----End of Transmission-----\n");
}

int main()
{
    int n;

    printf("1. Successful\n2. Lost/Damaged Frame\n3. Acknowledgement lost\n");
    printf("Enter input: ");
    scanf("%d", &ch);
    printf("Enter window size\n");
    scanf("%d", &n);

    send(n);

    return 0;
}