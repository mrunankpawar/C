#include<stdio.h> 

void sum(int a, int b);

int main()
{
    sum(2,3);
    return 0;
}

void sum(int a, int b){
    int result;
    result = a + b;
    printf("The sum of two numbers %d and %d is %d\n", a, b, result);
    

}