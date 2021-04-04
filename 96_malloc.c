#include<stdio.h> 
#include<stdlib.h>

int main()
{
    int *ptr;
    // sizeof() operator in C
    // printf("The size of int on this device is : %d\n", sizeof(int));
    // printf("The size of float on this device is : %d\n", sizeof(float));
    // printf("The size of char on this device is : %d\n", sizeof(char));
    ptr = (int *) malloc(6 * sizeof(int));
    
    for (int i = 0; i < 6; i++)
    {
        printf("The value of %d element is: %d\n", i, ptr[i]);
    }
    
    return 0;
}