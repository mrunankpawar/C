#include <stdio.h>

struct Complex
{
    int real;
    int complex;
};

void display(struct Complex c)
{
    printf("The Complex number is : %d + %d i\n", c.real, c.complex);
}

int main()
{
    struct Complex nums[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter the real value for num %d\n", i + 1);
        scanf("%d", &nums[i].real);

        printf("Enter the complex value for num %d\n", i + 1);
        scanf("%d", &nums[i].complex);
    }

    for (int i = 0; i < 5; i++)
    {
        display(nums[i]);
    }

    return 0;
}