//Write a program to calculate the sum of the number occuring in the multiplication table of 8 (8x1 to 8x10)

#include<stdio.h> 

int main()
{
    int i, sum = 0;
    int product;
    for (int i = 1; i <= 10; i++)
    {
        product = 8 * i;
        printf("8 x %d = %d\n",i ,product );
        sum += product;
        
    }
        printf("The sum of all the values occuring in multiplication table of 8 are: %d\n", sum);
    
    return 0;
}