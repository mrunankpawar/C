#include<stdio.h> 
#include<string.h>

struct employee{
    int code;
    float salary;
    char name[10];
};

int main()
{
    int a = 34;
    char b = 'm';
    float c = 34.34;
    
    struct employee e1;
    e1.code = 10;
    strcpy(e1.name, "Mrunank");
    e1.salary = 34.34;

    printf("%d\n", e1.code);
    printf("%s\n", e1.name);
    printf("%.3f\n", e1.salary);
    
    return 0;
}