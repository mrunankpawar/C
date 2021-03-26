#include<stdio.h> 

int main()
{
    char *ptr = "Mrunank"; 

    // char ptr[] = "Mrunank"; //--> Once you have initialized a string in an array, you cannot change/ reinitialize it 

    // But you can reinitialize it if you are using pointer to store the string
    ptr = "Pawar";

    printf("%s\n", ptr);
    return 0;
}