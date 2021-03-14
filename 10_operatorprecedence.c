#include<stdio.h> 

int main()
{
    // == OPERATOR PRECEDENCE ==
    // 1st priority --> * / %
    // 2nd priority --> + -
    // 3rd priority --> =
    // Operators are evaluated on basis of priority only in absense of parentheses

    int x = 5;
    int y = 10;

    printf("The value of 3 * x - 8 * y is : %d \n", 3*x - 8*y);

    // == OPERATOR ASSOCIATIVITY ==
    // When operators of equal priority are present in an expression, the tie is taken 
    // care of by associativity
    // x * y / z => ( x * y ) / z
    // x / y * z => ( x / y ) * z 
    // * , / follows left to right associativity

    printf("The value of 8.0 * y / 3.0 * x is : %f \n", 8.0 * y / 3.0 * x);
    // 8 * y / 3 * x
    // 8 * 10 / 3 * 5
    // 80 / 3 * 5
    // 26.67 * 5
    // 133.333333
    return 0;
}