#include <stdio.h>
#include <math.h>

int main()
{
    // a and b are operands
    // + , - , * , / are arithmetic operators
    int a = 5;
    int b = 10;
    printf("The value of a + b is : %d \n", a + b);
    printf("The value of a - b is : %d \n", a - b);
    printf("The value of a * b is : %d \n", a * b);
    printf("The value of a / b is : %d \n", a / b);

    int c;
    c = a * b; //Valid
    // a * b = c; //Invalid
    printf("The value of c is : %d \n", c);

    /*
    % --> modular division operator
    % --> Returns the remainder (5 % 2 = 1)
    % --> Cannot be applied on float
    % --> sign is same as of numerator (-5 % 2 = -1)
    */

    printf("5 when divided by 2 leaves a remainder of %d \n", 5 % 2);
    printf("-5 when divided by 2 leaves a remainder of %d \n", -5 % 2);

    //No operator is assumed to be present
    //printf("The value of 4 * 5 is %d \n ", (4)(5)); --> this will not return the product as no operator is provided
    printf("The value of 4 * 5 is %d \n ", (4) * (5));

    //There is no operator to perform exponentiation in C
    // printf("The value of 4 ^ 5 is %d \n", 4 ^ 5); --> WRONG

    printf("The value of 4 to the power 5 is %f \n", pow(4, 5));

    //Type conversions
    printf("The value of 6 + 5 is %d \n", 6 + 5);           // --> int and int => int
    printf("The value of 6 + 5.4 is %f \n", 6 + 5.4);       // --> int and float => float
    printf("The value of 6.2 + 5.3 is %f \n", 6.2 + 5.3);   // --> float and float => float
    printf("The value of 5/2 is %d \n", 5/2);
    printf("The value of 5.0/2 is %f \n", 5.0/2);
    printf("The value of 2/5 is %d \n", 2/5);
    printf("The value of 2.0/5 is %f \n", 2.0/5);
    printf("The value of 3.0/9 is %f \n", 3.0/9);

    return 0;
}