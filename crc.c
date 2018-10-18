#include <stdio.h>
#include <curses.h>
#include <string.h>

char divi[10];
char divi1[10];
int divilen, meslen, i, j;
char mes[20];
char mestemp[20];
char quot[20];
char crc[10];

int main() {

    //Input from the user
    printf("Enter the message: \n");
    gets(mes);

    printf("Enter the divisor: \n");
    gets(divi);

    divilen = strlen(divi); //divisor length
    meslen = strlen(mes); //message length
    strcpy(divi1, divi); //copy divi into temperorary location

    //padding 0s
    for(i = meslen; i < meslen + divilen - 1; i ++)
        mes[i] = '0';
    printf("Padded message is: \n");
    for(i = 0; i < meslen + divilen - 1; i ++)
        printf("%c",mes[i]);

    //storing a copy of the message
    strcpy(mestemp,mes);

    for (i = 0; i < meslen; i++)
    {
        quot[i] = mestemp[0];

        //bit of message is 0?
        if (quot[i] == '0')
            //then XOR with 0s
            for (j = 0; j < divilen; j++)
                //hence divisor all 0s
                divi[j] = '0';
        else
            for (j = 0; j < divilen; j++)
                divi[j] = divi1[j];
    
        //XOR individual bits to find CRC
        //traverse from LSB to MSB
        for (j = divilen - 1; j > 0; j--)
        {
            if (mestemp[j] == divi[j])
                crc[j - 1] = '0';
            else
                crc[j - 1] = '1';
        }

        //carry next bit from message
        crc[divilen - 1] = mes[i + divilen];

        //Copy new remainder back
        strcpy(mestemp, crc);
    }
    //Copy final remainder into CRC
    strcpy(crc, mestemp);

    //final crc
    printf("\nRemainder/CRC is: \n");
    for(i = 0; i < divilen; i++)
        printf("%c",crc[i]);
    
    return 0;
}