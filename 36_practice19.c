//Calculate factorial of a number
#include <stdio.h>

int main()
{
    int i, n, factorial = 1;

    printf("Enter a number : \n");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        factorial = factorial * i;
    }

    printf("Factorial of %d is %d\n", n, factorial);

    return 0;
}