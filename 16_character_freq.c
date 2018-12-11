#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[30],ch;
    int freq[26],i;

    //initialize frequency array
    for(i = 0; i < 26; i++)
        freq[i] = 0;

    //take input as an arrray of characters
    printf("Enter a string: ");
    //use RE to exclude carriage return
    scanf("%[^\n]s",str);

    for(i = 0; i < strlen(str); i++)
    {
        //if entered character is an alphabet
        if(isalpha(str[i]))
        {
            //convert it to lower
            ch = tolower(str[i]);
            //increase its frequency
            freq[ch-'a']++;
        }
    }

    //print counter array
    printf("Char\tFreq\n");
    for(i = 0; i < 26; i++)
        printf("%c\t%d\n",i+'a',freq[i]);
}