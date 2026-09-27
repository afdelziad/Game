```c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
    int random_number, answer, score = 0, attempts = 0;

    srand(time(NULL));

    random_number = rand() % 100 + 1 ;

    printf("*** THE GOAL OF THE GAME IS TO FIND THE RANDOMLY GENERATED NUMBER ***\n");

    do
    {
        do
        {
            printf("Enter a number between 1 and 100:\n");
            scanf("%d", &answer);

        } while (answer < 1 || answer > 100);

        if (random_number <= 10)
        {
            printf("The number is less or equal to 10 \n");
        }
        else if (random_number <= 20)
        {
            printf("The number is less or equal to 20\n");
        }
        else if (random_number <= 30)
        {
            printf("The number is less or equal to 30\n");
        }
        else if (random_number <= 40)
        {
            printf("The number is less or equal to 40\n");
        }
        else if (random_number <= 50)
        {
            printf("The number is less or equal to 50\n");
        }
        else if (random_number <= 60)
        {
            printf("The number is less or equal to 60\n");
        }
        else if (random_number <= 70)
        {
            printf("The number is less or equal to 70\n");
        }
        else if (random_number <= 80)
        {
            printf("The number is less or equal to 80\n");
        }
        else if (random_number <= 90)
        {
            printf("The number is less or equal to 90\n");
        }
        else
        {
            printf("The number is less or equal to 100\n");
        }

        if (random_number == answer)
        {
            score++;
        }
        else
        {
            printf("Try again, you did not find the correct number.\n");
        }

        attempts++;

    } while (score != 1);

    printf("CONGRATULATIONS! You won!\n");
    printf("You found the number %d in %d attempts.\n", random_number, attempts);
}

