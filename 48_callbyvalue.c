#include<stdio.h> 

int sum(int a, int b);

int main()
{
    int a=1, b=5;
    printf("The value of a and b is %d and %d\n", a, b);
    printf("The value of 1 + 5 is %d\n", sum(a,b));
    printf("The value of a and b after function call is %d and %d\n", a, b);
    return 0;
}

int sum(int a, int b){
    int c;
    c = a + b;
    //The below declaration of a and b won't affect as we are calling the function by values so it can't overwrite the declaration of values done in main() function.
    a = 435; 
    b= 567;
    return c;
}