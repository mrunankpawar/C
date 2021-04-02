#include<stdio.h> 

int main()
{
    FILE *ptr;
    // ptr = fopen("sample.txt", "r"); //--> for reading from the file
    ptr = fopen("sample.txt", "w"); //--> for writing to the file
    return 0;
}