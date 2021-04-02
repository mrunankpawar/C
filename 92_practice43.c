// Program to read 3 numbers from a file
#include <stdio.h>

int main()
{
    int a, b, c;

    FILE *ptr;
    ptr = fopen("practice43.txt", "r");

    fscanf(ptr, "%d %d %d", &a, &b, &c);
    printf("The values of a, b and c are : %d, %d and %d\n", a, b, c);

    fclose(ptr);

    return 0;
}