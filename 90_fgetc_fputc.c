#include<stdio.h> 

int main()
{
    FILE *ptr;

    // fgetc() function is used to get a char from the file
    ptr = fopen("getdemo.txt", "r");
    printf("The value of char is : %c\n", fgetc(ptr));
    printf("The value of char is : %c\n", fgetc(ptr));
    printf("The value of char is : %c\n", fgetc(ptr));
    printf("The value of char is : %c\n", fgetc(ptr));
    printf("The value of char is : %c\n", fgetc(ptr));
    printf("The value of char is : %c\n", fgetc(ptr));
    printf("The value of char is : %c\n", fgetc(ptr));
    printf("The value of char is : %c\n", fgetc(ptr));
    fclose(ptr);

    // putc() function is used to insert the char into the file
    ptr = fopen("getdemo.txt", "w");
    putc('c', ptr);
    putc('c', ptr);
    putc('c', ptr);
    fclose(ptr);

    return 0;
}
