#include<stdio.h>

int main()
{
    int i,j,c;
    scanf("%d",&c);

    //run through all the odd numbers
    for(j = 1; j<= c; j = j+2)
    {
        //spaces should be half of length of star
        for(i = (c-j)/2; i > 0;i--)
            printf(" ");
        //print star pattern
        for(i = 1; i <= j; i++)
            printf("*");
        printf("\n");
    }
    //make sure c is next odd number
    if(c%2==0)
        c = c-1;

    //c-2 prevents the last line from repeating 
    for(j = c-2; j >= 0; j = j-2)
    {
        for(i = (c-j)/2; i > 0; i--)
            printf(" ");
        for(i = 1; i <= j; i++)
            printf("*");
        printf("\n");
    }
}