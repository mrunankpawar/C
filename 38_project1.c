/* 
We will write a program that generates a random number and asks the player to guess it.
If the player's guess is higher than the actual number, the program displays "LOWER NUMBER PLEASE !!".
Similarly if the user's guess is too low, the program prints "HIGHER NUMBER PLEASE !!".
When the user guesses the correct number, the program displays the number of guesses the player used to arrive
at the number.
*/
#include<stdio.h> 
#include<stdlib.h>
#include<time.h>

int main()
{

    int number, guess, guessnum=1;
    srand(time(0));
    number = rand()%100; //generates random number between 1 to 100
    // printf("The number is : %d\n", number);

    do
    {
        printf("Guess the number between 1 to 100 \n");
        scanf("%d", &guess);

        if (guess<number)
        {
            printf("HIGHER NUMBER PLEASE !!\n");
        }
        else if (guess>number)
        {
            printf("LOWER NUMBER PLEASE !!\n");
        }
        else 
        {
            printf("YAYYY !! You guessed the number in %d chances\n", guessnum);
        }
        guessnum++;
    } while (guess!=number);
    
    return 0;
}