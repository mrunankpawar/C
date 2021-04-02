#include<stdio.h> 

int main()
{
    FILE *ptr;

    int num = 10;
    // As writing.txt file doesnot exist so it will first create a file and then print the message into it.
    ptr = fopen("writing.txt", "w"); //--> Open file in writing mode 
    fprintf(ptr, "The number is :%d", num); //--> This will work similar to 'printf'
    fclose(ptr);

    return 0;
}