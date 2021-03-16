#include <stdio.h>

int main()
{
    int i = 10;

    // i++ Post increment operator --> First print and then increment
    printf("The value after i++ is %d\n", i++);
    //Here it will print the value of i as 10 and increment it to 11

    // ++i Pre increment operator --> First increment and then print
    printf("The value after i++ is %d\n", ++i);
    // Here the value of i is 11 and now it will increment it first so now the value is 12
    // and it will get printed

    printf("The value of i is %d\n", i);
    // Here the value of i is 12 so it will simply get printed as no increment is performed 

    i += 10; // --> This will increment i by 10
    printf("The value of i after incrementing by 10 is %d\n", i);
    return 0;
}