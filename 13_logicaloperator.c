#include <stdio.h>

int main()
{
    int age;
    int emergencyPass = 0;
    emergencyPass = 1;

    printf("Enter your age :\n");
    scanf("%d", &age);

    if ((age >= 18 && age <= 80) || emergencyPass == 1)
    {
        printf("Your age is between 18 and 80 or if you have EmergencyPass. You can drive !!\n");
    }
    else
    {
        printf("Your age criteria doesn't match. You cannot drive !!\n");
    }

    return 0;
}