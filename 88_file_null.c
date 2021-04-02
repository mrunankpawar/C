#include<stdio.h> 

int main()
{
    FILE *ptr;
    ptr = fopen("mrunank.txt", "r");
    if (ptr == NULL)
    {
        printf("This file does not exist !!!\n");
    }
    else{
        printf("The file is present\n");
    }
    return 0;
}