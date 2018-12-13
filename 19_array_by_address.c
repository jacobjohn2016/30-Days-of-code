#include<stdio.h>
#include<math.h>

//function declarations
//function to read count
void readCount(int *a, int num)
{
    int i;
    for(i = 0; i < num; i++)
    {
        printf("Enter value for Day %d: ",i+1);
        scanf("%d",&a[i]);
    }
}

//function to find mean
float mean(int *a, int num)
{
    int sum = 0,i;
    for(i = 0; i < num; i++)
        sum += a[i];

    return (float)sum/num;
}

//function to find difference
void printDiff(int *a, int num, float mean)
{
    int i;
    printf("Differences are: \n");
    for(i = 0; i < num; i++)
        printf("%d\n",(int)fabsf(mean-a[i]));
}

int main()
{
    int acc[20], total = 0;
    int n;
    float m;

    printf("Enter the number of days: ");
    scanf("%d",&n);

    readCount(acc, n);
    printf("Mean is %f\n", m = mean(acc, n));
    printDiff(acc,n,m);
}