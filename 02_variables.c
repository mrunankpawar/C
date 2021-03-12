//variables

#include<stdio.h>

int main()
{
    int a = 5;

    // int b = 7.7; --> not recommended because 7.7 is not an integer

    float b = 7.7;

    char c = 'm';

    int d = 50;
    int e = 100 + 50;
    // for int --> %d;
    // for float --> %f;
    // for char --> %c;

    printf("The value of a is %d \n", a);
    printf("The value of b is %f \n", b);
    printf("The value of c is %c \n", c);
    printf("Sum of a and d is %d \n", a + d);
    printf("Sum operation performed at int e is %d \n", e);
    
    return 0;

}
