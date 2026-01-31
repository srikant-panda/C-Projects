

/*
for snake =0
for water gun =1
for gun =2
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    
    


    int computer = (rand() % (3));

    
    printf("SNAKE: O\nWATER: 1\nGUN:   2 \n");
    int player;
    printf("Enter your choice: ");
    scanf("%d", &player);
    printf("Computer chooses: %d \n",computer);
    
    if (player == computer)
    {
        printf(" The Game is draw!..");
    }
    else if (player == 0 && computer == 1)
    {
        printf("You wons...");
    }
    else if (player == 0 && computer == 2)
    {
        printf("Computer wons...");
    }
    else if (player == 1 && computer == 0)
    {
        printf("Computer wons...");
    }
    else if (player == 1 && computer == 2)
    {
        printf("you wons...");
    }
    else if (player == 2 && computer == 0)
    {
        printf("you wons...");
    }
    else if (player == 2 && computer == 1)
    {
        printf("Computer wons...");
    }
    else
    {
        printf("something wents wrong....");
    }
    
 }