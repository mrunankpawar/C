#include<stdio.h> 

int main()
{
    // char str[] = {'M', 'r', 'u', 'n', 'a', 'n', 'k', '\0'};
    // char str[] = "Mrunank"; //--> C adds null character automatically
    // char *ptr = str;
    // while (*ptr != '\0')
    // {
    //     printf("%c", *ptr);
    //     ptr++;
    // }
    // printf("\n");

    // Alternative way to print string instead of using while loop 

    char *ptr = "Mrunank Pawar";
    printf("%s\n", ptr);
    
    return 0;
}