#include <stdio.h>

int main()
{
    int mul[10];

    int num;
    printf("Enter a number :");
    scanf("%d", &num);

    for (int i = 0; i < 10; i++)
    {
        mul[i] = num * (i + 1);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d X %d = %d\n",num, i + 1, mul[i]);
    }

    return 0;
}