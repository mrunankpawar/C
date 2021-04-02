#include<stdio.h> 

typedef struct Date
{
    int date;
    int month;
    int year;
}date;

void display(date d){
    printf("The date is : %d/%d/%d\n", d.date, d.month, d.year);
}

int dateCmp(date d1, date d2){
    //Comparison on basis of year
    if (d1.year>d2.year)
    {
        return 1;
    }

    if (d1.year<d2.year)
    {
        return -1;
    }

    //Comparison on basis of month
    if (d1.month>d2.month)
    {
        return 1;
    }

    if (d1.month<d2.month)
    {
        return -1;
    }

    //Comparison on basis of date
    if (d1.date>d2.date)
    {
        return 1;
    }
    if (d1.date<d2.date)
    {
        return -1;
    }
    return 0;
}

int main()
{
    date d1 = {5,4,2001};
    date d2 = {5,4,2002};

    display(d1);
    display(d2);

    int a;
    a = dateCmp(d1,d2);
    printf("The comparison value is %d\n", a);

    
    return 0;
}