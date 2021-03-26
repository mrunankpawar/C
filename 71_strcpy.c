#include<stdio.h> 
#include<string.h>

int main()
{
    char *str = "Mrunank";
    char str2[10];

    //  strcpy() --> This function is used to copy the content of second string into first string passed to it
    strcpy(str2, str);
    printf("The updated string is %s\n", str2);
    return 0;
}