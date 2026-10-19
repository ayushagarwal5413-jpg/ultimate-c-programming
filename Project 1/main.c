
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));

    int randomNumber = (rand() % 100) + 1;
    int no_of_guesses = 0;
    int guessed;
do
{
//printf("Random number: %d\n", num);
    printf("Guess the number");
    scanf("%d" , & guessed);
    if(guessed>randomNumber)
    {
        printf("Lower Number Please!\n");
    }
    else if(guessed<randomNumber)
    {
        printf("Higher Number Please!\n");
    }
    else{
        printf("Congrats\n");
    }
    no_of_guesses++;
}
while(guessed!=randomNumber);
printf("You guesses the number in %d guesses" , no_of_guesses);
    return 0;
}
