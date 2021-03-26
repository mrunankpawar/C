#include<stdio.h> 
#include<string.h>

int main()
{
    char *str = "Mrunank";
    // strlen() --> This function is used to count the number of characters in the string excluding the null character.
    int a = strlen(str);
    printf("The length of the string is : %d\n", a);
    return 0;
}