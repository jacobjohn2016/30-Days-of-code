#include <stdio.h>
int sum(int a[], int n, int s)
{
    int i, j, s1;
    for(i = 0; i < n; i++)
    {
        s1 = 0;
        for(j = i; j < n; j++){
            s1+=a[j];
            if(s1 == s)
            {
                printf("%d %d\n", i + 1, j + 1);
                return 0;
            }
        }
    }
    printf("-1");
    return 0;
}
int main(){
    int a[100];
    int t,s,n,i;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        scanf("%d",&s);
        for(i = 0; i < n;i++)
            scanf("%d",&a[i]);
        sum(a,n,s);
    }
    return 0;
}