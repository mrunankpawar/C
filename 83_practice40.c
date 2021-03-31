//Create a two dimensional vector using structure
#include <stdio.h>

typedef struct vector
{
    int x;
    int y;
}V;

V sumVector(V v1, V v2){
    V result;
    result.x = v1.x + v2.x;
    result.y = v1.y + v2.y;
    return result;
};

int main()
{
    V v1, v2, sum;
    v1.x = 10;
    v1.y = 5;
    printf("The dimensions of v1 are X = %d and Y = %d\n", v1.x, v1.y);

    v2.x = 20;
    v2.y = 15;
    printf("The dimensions of v2 are X = %d and Y = %d\n", v2.x, v2.y);

    sum = sumVector(v1, v2);
    printf("The dimensions of SumVector are X = %d and Y = %d\n", sum.x, sum.y);
    return 0;
}