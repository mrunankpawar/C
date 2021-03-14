#include<stdio.h> 

int main()
{
    int num;
    printf("Enter the number : \n");
    scanf("%d", &num);

    if (num == 1)
    {
        printf("Number is ONE\n");
    }
    else if (num == 2)
    {
        printf("Number is TWO\n");
    }
    else
    {
        printf("Number is neither 1 nor 2 !!\n");
    }
    
    return 0;
}