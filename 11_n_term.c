#include <stdio.h>
int main()
{
    int n, sum = 0, i, t;
    scanf("%d", &t);
    while (t--)
    {
        sum = 0;
        scanf("%d", &n);
        for (i = 1; i <= n; i++)
        {
            sum = sum + i;
        }
        printf("%d\n", sum);
    }
}