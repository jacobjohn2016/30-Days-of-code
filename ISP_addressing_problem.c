/*
program to find the 
first address,
last address and 
no. of address 
for the given IP address/Subnet
*/

#include <stdio.h>
#include <math.h>
int addr1, addr2, addr3, addr4, mask;
long ta;
int ngroup;
int nsubaddr;
int num_addr_subnet[1024], n, total = 0, j;
int mask_subnet[1024];
int get_data()
{
    printf("Enter the IP address from left to right in decimal with spaces in betweeen: \n");
    scanf("%d%d%d%d", &addr1, &addr2, &addr3, &addr4);
    printf("\nEnter the value of mask n <= 32 \n");
    scanf("%d", &mask);
    return 0;
}
int total_number_of_addreses()
{
    printf("The total number of addresses are: ");
    ta = pow(2, mask);
    printf("%ld\n", ta);
    return 0;
}
int num_addr_each_subnet()
{
    printf("\nEnter the number of subnets required\n");
    scanf("%d", &n);
    printf("\nEnter the number of address in each subnet: \n");
    scanf("%d", &nsubaddr);
    int i;
    for (i = 0; i < n; i++)
    {
        num_addr_subnet[i] = nsubaddr;
        total += num_addr_subnet[i];
    }
    return 0;
}
int value_of_mask_for_each_subnet()
{
    int i;
    for (i = 0; i < n; i++)
    {
        mask_subnet[i] = 32 - ((int)(log(num_addr_subnet[i]) / log(2)));
    }
    return 0;
}
int addresses_of_each_subnet()
{
    printf("The first and last addresss of each subnet are: ");
    printf("\n");
    int i;
    for (i = 0; i < n; i++)
    {
        int a, b;
        printf("Network Address of subnet %d is %d.%d.%d.%d\\%d\n", i + 1, addr1, addr2, addr3, addr4, mask_subnet[i]);
        addr4 += num_addr_subnet[i];
        if (addr4 > 255)
        {
            a = addr4 / 256;
            b = addr4 % 256;
            addr3 += a;
            addr4 = b;
            if (addr3 > 255)
            {
                a = addr4 / 256;
                b = addr4 % 256;
                addr2 += a;
                addr3 = b;
                if (addr2 > 255)
                {
                    a = addr4 / 256;
                    b = addr4 % 256;
                    addr1 += a;
                    addr2 = b;
                }
            }
        }
        int a1 = addr1, a2 = addr2, a3 = addr3, a4 = addr4;
        if (addr4 != 0)
        {
            a4 = addr4 - 1;
        }
        else if (addr3 != 0)
        {
            a4 = 255;
            a3 = addr3 - 1;
        }
        else if (addr2 != 0)
        {
            a4 = 255;
            a3 = 255;

            a2 = addr2 - 1;
        }
        else
        {
            a4 = 255;
            a3 = 255;
            a2 = 255;
            a1 = addr1 - 1;
        }
        printf("Broadcast Address of subnet %d is %d.%d.%d.%d\\%d\n", i + 1, a1, a2, a3, a4,mask_subnet[i]);
    }
    ta = ta - (n*nsubaddr);
    printf("Addresses left: %ld\n", ta);
    printf("\n");
    return 0;
}
int main()
{
    get_data();
    total_number_of_addreses();
    printf("\nEnter the number of groups: ");
    scanf("%d", &ngroup);
    for (j = 0; j < ngroup; j++)
    {
        printf("\nGroup %d", j + 1);
        num_addr_each_subnet();
        value_of_mask_for_each_subnet();
        addresses_of_each_subnet();
    }
    return 0;
}