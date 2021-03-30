#include<stdio.h> 

struct employee{
    int code;
    float salary;
    char name[10];
};

int main()
{
    //This is another way of initialzing structure 
    struct employee mrunank = {100, 34.34, "Mrunank"};

    printf("The code is : %d\n", mrunank.code);
    printf("The salary is : %.2f\n", mrunank.salary);
    printf("The name is : %s\n", mrunank.name);
   
    return 0;
}