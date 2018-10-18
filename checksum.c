#include <stdio.h>
#include <math.h>

/* convert decimal to binary*/
unsigned long long bin(unsigned long long x)
{
    unsigned long long binary = 0, i = 1, r;
    while (x > 0)
    {
        r = x % 2;
        x = x / 2;
        binary = binary + (r * i);
        i = i * 10;
    }
    return binary;
}

/* convert binay to decimal*/
unsigned long long dec(unsigned long long x)
{
    unsigned long long decimal = 0, i = 1, r;
    while (x > 0)
    {
        r = x % 10;
        x = x / 10 ;
        decimal = decimal + (r * i);
        i = i * 2;
    }
    return decimal;
}

int main() {
    unsigned long long cs = 0, i, b, r;
    unsigned long long x[20], sum;

    printf("\nEnter number of inputs: ");
    scanf("%llu",&r);
    
    for(i = 0; i < r; i++)
    {
        printf("\nEnter the number in binary: ");
        scanf("%llu",&x[i]);
        sum += dec(x[i]);
    }

    printf("\nSum is %llu\n",bin(sum));

    b = bin(sum);
    i = 1;
    while(b > 0)
    {
        r = b%10;
        b = b/10;
        if(r == 0)
            cs = cs + i;
        i = i * 10;
    }
    printf("\nChecksum is %llu",cs);
}