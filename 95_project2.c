#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int rockPaperScissor(char you, char comp)
{
    //draw
    if (you == comp)
    {
        return 0;
    }

    // --> rock and paper
    if (you == 'p' && comp == 'r')
    {
        return 1;
    }
    else if (you == 'r' && comp == 'p')
    {
        return -1;
    }

    // --> paper and scissor
    if (you == 's' && comp == 'p')
    {
        return 1;
    }
    else if (you == 'p' && comp == 's')
    {
        return -1;
    }

    // --> rock and scissor
    if (you == 'r' && comp == 's')
    {
        return 1;
    }
    else if (you == 's' && comp == 'r')
    {
        return -1;
    }
}

int main()
{
    char you, comp;
    srand(time(0));
    int number = rand()%100+1;
    if(number<33){
        comp = 'r';
    }
    else if (number>33 && number<66)
    {
        comp = 'p';
    }
    else{
        comp = 's';
    }
    
    printf("Choose 'r' for rock, 'p' for paper and 's' for scissor :");
    scanf("%c", &you);
    printf("R beats S\n");
    printf("P beats R\n");
    printf("S beats P\n");
    int result = rockPaperScissor(you, comp);
    printf("You chose %c and computer chose %c\n", you, comp);
    if (result == 0)
    {
        printf("GAME DRAW !!\n");
    }
    else if (result == 1)
    {
        printf("YOU WIN !!\n");
    }
    else
    {
        printf("YOU LOSE !!\n");
    }

    return 0;
}