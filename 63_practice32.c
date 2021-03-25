//Write a program to count number of positive integers in an array
#include<stdio.h> 

void posint()
{
    int size, count=0, i, arr[100];

    //Get size of array from user
    printf("Enter array size \n");
    scanf("%d", &size);

    //Get elements from the user and put it in an array
    for(i = 0; i < size; i++)
    {
        printf("Enter the elements in an array :\n");
        scanf("%d", &arr[i]);
    }

    //Condition to count the positive integers in an array
    for(i = 0; i < size; i++)
    {
          if(arr[i] > 0)
            count++;
    }

    printf("The number of positive integers in an array is : %d\n", count);
}

int main()
{
    posint();
    return 0;
}