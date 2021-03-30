#include<stdio.h> 
#include<string.h>

struct employee{
    int code;
    float salary;
    char name[10];
};

int main()
{
    struct employee facebook[100];

    facebook[0].code = 101;
    facebook[0].salary = 11.11;
    strcpy(facebook[0].name, "Mrunank");

    facebook[1].code = 102;
    facebook[1].salary = 12.21;
    strcpy(facebook[1].name, "Mru");

    facebook[2].code = 103;
    facebook[2].salary = 13.31;
    strcpy(facebook[2].name, "Mruna");

    printf("The code of employee is %d\n",facebook[0].code);
    printf("The salary of employee is %f\n",facebook[0].salary);
    printf("The name of employee is %s\n\n",facebook[0].name);

    printf("The code of employee is %d\n",facebook[1].code);
    printf("The salary of employee is %f\n",facebook[1].salary);
    printf("The name of employee is %s\n\n",facebook[1].name);

    printf("The code of employee is %d\n",facebook[2].code);
    printf("The salary of employee is %f\n",facebook[2].salary);
    printf("The name of employee is %s\n\n",facebook[2].name);
    
    return 0;
}