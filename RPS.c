#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int choice, rounds, userScore = 0, computerScore = 0;
    srand(time(NULL));

    printf("\n\n***************************************************************\n");
    printf("\t\tRock Paper Scissors Game !!\n");
    printf("***************************************************************\n\n");

    printf("How many rounds do you wanna play? ");
    scanf("%d", &rounds);

    for (int i = 0; i < rounds; i++)
    {
        int randomNum = (rand() % 3) + 1;

        printf("\nRound %d\n", i + 1);
        printf("Rock: 1\n");
        printf("Paper: 2\n");
        printf("Scissors: 3\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice < 1 || choice > 3)
        {
            printf("Invalid input! Try again.\n");
            i--;
            continue;
        }

        printf("You chose: %s\n",
               choice == 1 ? "Rock" :
               choice == 2 ? "Paper" : "Scissors");

        printf("Computer chose: %s\n",
               randomNum == 1 ? "Rock" :
               randomNum == 2 ? "Paper" : "Scissors");

        if (choice == randomNum)
        {
            printf("Draw!\n");
        }
        else if ((choice == 1 && randomNum == 3) ||
                 (choice == 2 && randomNum == 1) ||
                 (choice == 3 && randomNum == 2))
        {
            printf("You won this round!\n");
            userScore++;
        }
        else
        {
            printf("Computer won this round!\n");
            computerScore++;
        }
    }

    printf("\n***************************************************************\n");
    printf("\t\tFINAL SCOREBOARD\n");
    printf("***************************************************************\n");
    printf("Your score: %d\n", userScore);
    printf("Computer score: %d\n", computerScore);

    if (userScore > computerScore)
        printf("Congratulations! You won the game!\n");
    else if (userScore < computerScore)
        printf("Computer won the game!\n");
    else
        printf("The game ended in a draw!\n");

    return 0;
}