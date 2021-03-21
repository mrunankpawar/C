#include<stdio.h> 
// fibonacci series --> 0, 1, 1, 2, 3, 5, 8, 13
// (n-1) + (n-2) + .....
// fib(1) = 0
// fib(2) = 1

int fibonacci(int n);

int main()
{
    int n;
    printf("Enter the element :\n");
    scanf("%d", &n);
    printf("Fibonacci series :\n");
    fibonacci(n);
    return 0;
}

int fibonacci(int n){
    int result, t1=0, t2=1, nextTerm;
    for (int i = 1; i <= n; ++i)
    {
        printf("%d\n", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    return nextTerm;
}