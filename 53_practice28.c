//Program to print value of a variable using pointer to pointer
#include<stdio.h> 

int main()
{
    int a = 101; 

    int *ptr; //pointer
    int **ptr_ptr; //pointer_to_pointer

    ptr = &a; //pointer --> addressof(a)
    ptr_ptr = &ptr; //pointer_to_pointer --> addressof(pointer)

    printf("The value of a is : %d\n", **ptr_ptr);

    return 0;
}