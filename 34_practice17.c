//Calculate sum of first 10 natural numbers using for, while and do-while loop
#include <stdio.h>

int main()
{
    int i = 0, sum = 0, n = 10;

    //  ==> USING FOR LOOP
    for (int i = 0; i <= n; i++)
    {
        sum += i;
    }

    //  ==> USING WHILE LOOP
    while (i <= n)
    {
        sum += i;
        i++;
    }

    //  ==> USING DO-WHILE LOOP
    do
    {
        sum += i;
        i++;
    } while (i <= n);

    printf("The value of sum(1 to 10) is %d\n", sum);
    return 0;
}