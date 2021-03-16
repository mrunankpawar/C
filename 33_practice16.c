//Write a program to print multiplication table of a given number n
#include <stdio.h>

int main()
{
    int n;

    printf("Enter a number :\n");
    scanf("%d", &n);

    printf("==========MULTIPLICATION TABLE OF %d\n", n);

    for (int i = 1; i <= 10; i++)
    {
        printf("%d X %d = %d\n", n, i, n * i);
    }

    return 0;
}