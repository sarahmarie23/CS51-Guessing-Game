#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int max = 0;
    int num = 0;
    int guess = 0;
    int howmany = 0;

    printf("Welcome to the number guessing game!\n");

    printf("Please enter an integer that is 100 or bigger: ");
    scanf("%d", &max);

    //Create a random number between 1 and max
    srand(time(0));
    num = (rand()%max)+1;

    printf("I have just generated a number between 1 and %d\n", max);
    printf("Now you try to guess the number!\n\n");


    do {
        printf("Enter your guess here: ");
        scanf("%d", &guess);
        howmany++;
        if(guess < num){
            printf("Too low. Try again.\n");
        } else if(guess > num) {
            printf("Too high. Try again.\n");
        }
    } while(guess != num);

    printf("Congratulations! You got it right in %d guesses!\n", howmany);
    printf("Thank you for playing!\n");
    printf("Author: Sarah Jimenez");


    return 0;
}
