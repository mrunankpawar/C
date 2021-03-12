//Practice Probelm : Calculate area of rectangle 

#include<stdio.h>
    
int main()
{
    //Calculate area of rectangle

    int length, breadth;

    printf("Enter length : ");
    scanf("%d", &length);

    printf("Enter breadth : ");
    scanf("%d", &breadth);

    int area = length * breadth;

    printf("The area of rectangle is %d \n", area);
    return 0;
}
