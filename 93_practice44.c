// Write a program to generate multiplication table of a given number and insert the table directly into the file
#include <stdio.h>

int main()
{
    int num;
    FILE *ptr;
    ptr = fopen("multiplication.txt", "w");
    printf("Enter the number you want multiplication table of: ");
    scanf("%d", &num);

    for (int i = 0; i < 10; i++)
    {
        fprintf(ptr, "%d X %d = %d\n", num, i+1, num*(i+1));
    }
    
    return 0;
}