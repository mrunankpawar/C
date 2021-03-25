#include<stdio.h> 

int main()
{
    int i = 10;
    int *ptr = &i;
    printf("The value of ptr is %u\n", ptr);
    ptr = ptr + 1; //Here 1 will represent no. of bytes of the data typr (int->4, char->1)
    ptr++;  //increment --> +4
    ptr--;  //decrement --> -4
    printf("The value of ptr is %u\n", ptr);

    return 0;
}