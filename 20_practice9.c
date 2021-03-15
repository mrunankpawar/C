//Program to check whether the char is lowercase or not ?

#include <stdio.h>

int main()
{
    //97 - 122 --> a - z  (ASCII)
    char ch;
    printf("Enter the character :\n");
    scanf("%c", &ch);
    if (ch <= 122 && ch >= 97)
    {
        printf("It is lowercase\n");
    }
    else
    {
        printf("It is not lower case\n");
    }

    return 0;
}