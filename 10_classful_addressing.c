#include<stdio.h>
#include<string.h>

int main(){
    char ip[15], a1[3], a;
    int i, len, first;

    printf("Enter the ip address as xxx.xxx.xxx.xxx: ");
    gets(ip);

    //extract first octet
    while(ip[i] != '.')
    {
        a1[i] = ip[i];
        i++;
    }

    //converting string to decimal
    len = strlen(a1) - 1;
    i = 1;
    first = 0;
    while(len >= 0)
    {
        first = first + (i*(a1[len]-48));
        i = i*10;
        len--;
    }

    //comparison to find class
    printf("%s is of ",ip);
    if(first>=0 && first<=127)
        printf("Class A\n");
    if(first>127 && first<191)
        printf("Class B\n");
    if(first>191 && first<224)
        printf("Class C\n");
    if(first>224 && first<=239)
        printf("Class D\n");
    if(first>239)
        printf("Class E\n");
}