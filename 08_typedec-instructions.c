#include <stdio.h>

int main()
{
    // int a = 4; //Type declaration instruction
    int a = 4, b, c; //Type declaration instruction
    b = c = a;
    printf("The value of a is %d \n", a);
    printf("The value of b is %d \n", b);
    printf("The value of c is %d \n", c);

    float d = 1.1;
    float e = d + 5.3;
    printf("The value of d is %f \n", d);
    printf("The value of e is %f \n", e);

    //This will throw an error because compiler doesn't know value of a while executing float b;

    // float b = a + 5.3;
    // float a = 1.1;
    // printf("The value of b is %f \n", b);

    return 0;
}