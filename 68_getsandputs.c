#include<stdio.h> 

int main()
{
    char s[30];

    printf("Enter your name: ");

    //  gets() is a function which can be used to receive multi-word string
    gets(s);

    //  puts() is a function which prints the string 
    puts(s);
    
    // printf("Your name is %s\n", s);
    return 0;
}