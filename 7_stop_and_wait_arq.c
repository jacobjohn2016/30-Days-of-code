/* Stop and Wait Protocol ( Flow Control ) */
#include <stdio.h>
#include <time.h>
#include <unistd.h>

int main(){
    int ch,n,ack;
    double trigger = 0.000300;
    double msec = 0;
    clock_t time_elapsed, t;

    printf("1. Successful\n2. Frame lost\n3. Acknowledgement lost\n4. Timer runs out\n");
    printf("Enter input: ");
    scanf("%d", &ch);
    printf("\nEnter number of frames: "); //give a minimum number of 10 frames
    scanf("%d", &n);
    switch(ch)
    {
        case 1:
        l4: while (n > 0)
            {
                t = clock();
                printf("\nSending frame %d", n % 2);
                printf("\nTimer has started");
                do{
                    time_elapsed = clock() - t;
                    sleep(1); //delays the output
                    msec = ((double)time_elapsed) / CLOCKS_PER_SEC;
                    printf("\n %f seconds have elapsed",msec);
                } while(msec < trigger);
                if( n == 0)
                    break;
                ack = (n + 1) % 2;
                printf("\nAck for frame %d", ack);
                n -= 1;
            }
            printf("\nEnd of stop and wait protocol\n");
            break;

        case 2:
            while (n > 0)
            {
                printf("\nSending frame %d", n % 2);
                printf("\nTimer has started");
                do
                {
                    time_elapsed = clock() - t;
                    sleep(1);
                    msec = ((double)time_elapsed) / CLOCKS_PER_SEC;
                    if (msec > 0.003800)
                        goto l1;
                    ack = (n + 1) % 2;
                    printf("\nAck for frame %d", ack);
                } while (msec < trigger);
                printf("\nTime: %f",msec);
                n -= 1;
            }
            l1: printf("\nDid not receieve Frame %d", n % 2);
            printf("\nRetransmission initiated\n");
            goto l4;

        case 3:
            while (n > 0)
            {
                printf("\nSending frame %d", n % 2);
                printf("\nTimer has started");
                do
                {
                    time_elapsed = clock() - t;
                    sleep(1);
                    msec = ((double)time_elapsed) / CLOCKS_PER_SEC;
                    ack = (n + 1) % 2;
                    printf("\nAck for frame %d", ack);
                    if (msec > 0.003800)
                        goto l2;
                } while (msec < trigger);
                printf("\nTime: %f", msec);
                n -= 1;
            }
            l2: printf("\nDid not recieve Ack %d\n", ack);
            printf("\nRetransmission initiated\n");
            goto l4;
        
        case 4:
            while (n > 0)
            {
                printf("\nSending frame %d", n % 2);
                printf("\nTimer has started");
                do
                {
                    time_elapsed = clock() - t;
                    sleep(1);
                    msec = ((double)time_elapsed) / CLOCKS_PER_SEC;
                    if (msec > 0.003800)
                        goto l3;
                    ack = (n + 1) % 2;
                    printf("\nAck for frame %d", ack);
                } while (msec < trigger);
                printf("\nTime: %f", msec);
                n -= 1;
            }
            l3: printf("\nTimer ran out at %f\n", msec);
            printf("\nRetransmission initiated\n");
            goto l4;
    }

    return 0;
}