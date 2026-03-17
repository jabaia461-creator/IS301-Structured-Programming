#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to get user's guess
int getGuess()
{
    int guess;
    printf("Enter your guess: ");
    scanf("%d", &guess);
    return guess;
}

// Function for success message
void successMessage()
{
    printf("Congratulations! You did it.\n");
}

// Function for unsuccessful message
void sorryMessage(int number)
{
    printf("Sorry. The number was %d.\n", number);
    printf("You should have gotten it by now.\n");
    printf("Better luck next time.\n");
}

int main()
{
    // Student Details
    printf("Full Name: Joseph ABAIA\n");
    printf("Student ID: 180158\n");
    printf("Date: 17/03/2026\n\n");

    int randomNumber, guess;
    int tries = 5;

    srand(time(0));
    randomNumber = rand() % 20 + 1;

    printf("I am thinking of a number between 1 and 20.\n");

    while (tries > 0)
    {
        guess = getGuess();

        if (guess == randomNumber)
        {
            successMessage();
            return 0;
        }
        else if (guess < randomNumber)
        {
            printf("Your guess is low. Try again.\n");
        }
        else
        {
            printf("Your guess is high. Try again.\n");
        }

        tries--;
    }

    sorryMessage(randomNumber);

    return 0;
}