#include<stdio.h>

//function definition to swap the values
void swap(int* a, int* b)
{
    int temp;
    temp = *b;         /* Save the value at address b*/
    *b = *a;           /* Put y into x */
    *a = temp;         /* Put temp into y*/
}

int main()
{
    int a,b;

    printf("Enter value of a: ");
    scanf("%d",&a);
    printf("Enter value of b: ");
    scanf("%d",&b);

    /* calling a function to swap the values.
     * &a indicates pointer to a i.e. address of variable a and
     * &b indicates pointer to b i.e. address of variable b.
     */

    swap(&a,&b);

    printf("Value of a is: %d\n",a);
    printf("Value of b is: %d\n",b);
}
