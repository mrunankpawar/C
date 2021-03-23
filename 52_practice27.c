//Write a program using function to calculate the sum and average of two numbers. Use pointers and print the values of sum and avg in main()
#include<stdio.h> 

void sumAndavg(int a, int b, int *sum, float *avg){
    *sum = a + b;
    *avg = (float)(*sum)/2;
}

int main()
{
    int i, j, sum;
    float avg;

    i = 5;
    j = 10;

    sumAndavg(i, j, &sum, &avg);

    printf("The value of sum is %d\n", sum);
    printf("The value of average is %.1f\n", avg);

    return 0;
}

