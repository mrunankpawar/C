#include<stdio.h> 
#include<string.h>

int main()
{
    char str1[45] = "Hello";
    char *str2 = "Mrunank";

    //strcat() -->This function is used to concatenate two strings
    strcat(str1, str2);
    printf("Now the concatenated string is %s\n", str1);
    return 0;
}
