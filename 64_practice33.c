#include<stdio.h> 

void printTable(int *mulTable, int num, int n, int level){
    printf("The multiplication table of %d is :\n", num);
    for (int i = 0; i < n; i++)
    {
        mulTable[i] = num * (i + 1);
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d X %d = %d\n", num, i + 1, mulTable[i]);
    }
    printf("===========================================\n");

}
int main()
{
    int mulTable[3][10];

    printTable(mulTable[0], 2, 10, 0);
    printTable(mulTable[1], 7, 10, 1);
    printTable(mulTable[2], 9, 10, 2);

    return 0;
}