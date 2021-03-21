//Calculate area of square using library functions
#include<stdio.h> 
#include<math.h>

int main()
{
    int side;
    printf("Enter side of square :\n");
    scanf("%d", &side);
    printf("The value of area of square is : %f\n", pow(side,2));
    return 0;
}
