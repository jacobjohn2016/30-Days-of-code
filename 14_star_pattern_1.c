#include<stdio.h>

int main()
{
    int j,i,c;
    scanf("%d",&c);

    for(j = 0; j <= c; j++)
    {
        for(i = 1; i <= j; i++)
            printf("%d ",i);
        printf("\n");
    }
    
    for(j = c - 1; j >= 0; j--)
    {
        for(i = 1; i <= j; i++)
            printf("%d ",i);
        printf("\n");
    }
}