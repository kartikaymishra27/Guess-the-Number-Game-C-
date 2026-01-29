#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int random, guess;
    int no_of_guess = 0;
    srand(time(NULL));

    printf("Welcome to the world of guessing number\n");
    random = rand() % 100 + 1;

    do
    {
        printf("\nPlease enter your Guess between(1to100):");
        scanf("%d", &guess);
        no_of_guess++;
        if (guess < random)
        {
            printf("Guess Larger number \n");
        }
        else if (guess > random)
        {
            printf("Guess Smaller number \n");
        }
        else
        {
            printf("Congratulation!!! you have guessed the Number in %d attempt \n", no_of_guess);
        }
    } while (guess != random);
    {
        printf("\nBye Bye,thanks for Playing\n");
        printf("\nDeveloped by: Kartiaky mishra");
    }
}