```c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
    int result, answer, score = 0, target, random_number;

    srand(time(NULL));

    printf("{Welcome to Ziad Afdel's Rock Paper Scissors Game}\n");

    printf("How many points do you need to win? \n");
    scanf("%d", &target);

    while (score < target)
    {
        random_number = rand() % 91;

        do
        {
            printf("Enter your choice:\n");
            printf("1 = Rock\n");
            printf("2 = Paper\n");
            printf("3 = Scissors\n");
            scanf("%d", &answer);

        } while (answer != 1 && answer != 2 && answer != 3);

        switch (answer)
        {
        case 1:
            printf("You chose Rock\n");
            break;

        case 2:
            printf("You chose Paper\n");
            break;

        case 3:
            printf("You chose Scissors\n");
            break;

        default:
            break;
        }

        if (random_number <= 30)
        {
            result = 1;
            printf("The computer chose Rock\n");
        }
        else if (random_number <= 60)
        {
            result = 2;
            printf("The computer chose Paper\n");
        }
        else
        {
            result = 3;
            printf("The computer chose Scissors\n");
        }

        if (result == 1 && answer == 2)
        {
            printf("You won!\n");
            printf("+1\n");
            score++;
        }
        else if (result == 1 && answer == 3)
        {
            printf("You lost!\n");
            printf("-1\n");
            score--;
        }
        else if (result == 2 && answer == 1)
        {
            printf("You lost!\n");
            printf("-1\n");
            score--;
        }
        else if (result == 2 && answer == 3)
        {
            printf("You won!\n");
            printf("+1\n");
            score++;
        }
        else if (result == 3 && answer == 1)
        {
            printf("You won!\n");
            printf("+1\n");
            score++;
        }
        else if (result == 3 && answer == 2)
        {
            printf("You lost!\n");
            printf("-1\n");
            score--;
        }
        else
        {
            printf("Draw!\n");
        }
    }

    printf("Your final score is: %d\n", score);
}
```

