#include<stdio.h> 
#include<string.h>

int main()
{
    char str1[45] = "Hello";
    char *str2 = "Hello";
    int val = strcmp(str1, str2);
    printf("Now the value is %d\n", val);
    return 0;
}