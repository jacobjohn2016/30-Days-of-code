#include <stdio.h>

int main()
{
    int ch, windowsize, sent = 0, ack, i;

    printf("1. Sucessful\n2. Frame lost\n");
    printf("Enter input: ");
    scanf("%d", &ch);
    printf("Enter window size\n");
    scanf("%d", &windowsize);
    
    switch (ch)
    {
    case 1:
        for (i = 0; i < windowsize; i++)
        {
            printf("Frame %d has been transmitted.\n", sent);
            sent++;
            if (sent == windowsize)
                break;
        }
        printf("\nEnd of Transmission\n");
        break;
    case 2:
        while(1)
        {
            for (i = 0; i < windowsize; i++)
            {
                printf("Frame %d has been transmitted.\n", sent);
                sent++;
                if (sent == windowsize)
                    break;
            }

            while(1){
                printf("\nPlease enter the last Acknowledgement received.\n");
                scanf("%d", &ack);

                if (ack >= windowsize)
                    printf("Please enter ACK less than %d", windowsize);
                else
                    break;
            }

            if (ack == windowsize-1)
                break;
            else
                sent = ack;
        }
        printf("\nEnd of Transmission\n");
        break;
    }
}
