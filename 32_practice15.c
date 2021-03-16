//Write multiplication table of 10 in reverse order
#include<stdio.h> 

int main()
{
    printf("==========MULTIPLICATION TABLE OF 10 IN REVERSE ORDER==========\n");
    for (int i = 10; i ; i--)
    {
        printf("10 X %d = %d\n", i, 10*i);
    }
    
    return 0;
}