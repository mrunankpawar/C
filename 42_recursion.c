#include<stdio.h> 

int factorial(int x);

int main()
{
    int n = 5;
    printf("The value of factorial %d is %d\n", n, factorial(n));
    return 0;
}

int factorial(int x){
    if(x==1 || x==0)
    {
        return 1;
    }
    else{
        return x * factorial(x-1);  //calling factorial function in a function itself 
    }
}