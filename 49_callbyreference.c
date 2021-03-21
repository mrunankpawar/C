#include<stdio.h> 

// void wrongSwap(int x, int y);

void swap(int *x, int *y);

int main()
{
    int x=5, y=10;
    printf("The value of x and y BEFORE SWAPPING %d and %d\n", x, y);
    // wrongSwap(x,y);
    swap(&x,&y);
    printf("The value of x and y AFTER SWAPPING %d and %d\n", x, y);

    return 0;
}

//This function will not work because we are calling it by values so it's not going to affect the values in the main() function
// void wrongSwap(int x, int y){
//     int temp;
//     temp = x;
//     x = y;
//     y = temp;
// }

void swap(int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}