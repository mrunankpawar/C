#include <stdio.h>

//Function prototype
void greeting();
void GoodMorning();
void GoodAfternoon();
void GoodNight();

int main()
{
    //Function call
    // Either you can call the functions separately in the main() function or you can call the functions 
    // directly inside other functions.
    greeting();
    // GoodMorning();
    // GoodAfternoon();
    // GoodNight();
    return 0;
}

//Function Definition
void greeting()
{
    printf("WELCOME TO FUNCTIONS !!\n");
    GoodMorning();
}

void GoodMorning()
{
    printf("Good Morning Mrunank\n");
    GoodAfternoon();
}

void GoodAfternoon()
{
    printf("Good Afternoon Mrunank\n");
    GoodNight();
}

void GoodNight()
{
    printf("Good Night Mrunank\n");
}
