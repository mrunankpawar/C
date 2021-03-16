#include <stdio.h>

int main()
{
    int i = 0;
    do
    {
        printf("The value of i is: %d\n", i);
        if (i == 4)
        {
            break; //break statement --> This will break the loop when the condition is met
        }
        i++;
    } while (i < 10);

    return 0;
}