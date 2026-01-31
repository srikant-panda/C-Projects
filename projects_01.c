
                                        // NUMBER GUESSING GAME 

                             
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Seed the random number generator with the current time
    srand(time(0));

    // Define the range for the random number
    int lower = 1;
    int upper = 100;

    // Generate a random number within the specified range
    int random_number = (rand() % (upper - lower + 1)) + lower;

    // printf("Random number between %d and %d: %d\n", lower, upper, random_number);
    int guessed_number;
    int no_of_guesses = 1;
    printf("Guess the number\n");

    do
    {
        scanf("%d", &guessed_number);

        if (guessed_number > random_number)
        {
            printf("Guess lower no\n");
        }
        else if (guessed_number < random_number)
        {
            printf("Guess higer number\n");
        }
        else
        {
            printf("Congratulations!\t");
        }
        no_of_guesses++;

    } while (guessed_number != random_number);
    printf("You won at %d steps", no_of_guesses);

    return 0;
}
