#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct
{
    int dice1;
    int dice2;
} DiceResult;
DiceResult Rolling_dice(void)
{
    int dice1 = rand() % 6 + 1;
    int dice2 = rand() % 6 + 1;
    printf("Dice 1: %d; Dice 2: %d\n", dice1, dice2);
    DiceResult result = {dice1, dice2};
    return result;
}

int judge(int CASE, DiceResult result, int point)
{
    int sum = result.dice1 + result.dice2;
    printf("Sum: %d\n", sum);

    switch (CASE)
    {
    case 0:
        if (sum == 7 || sum == 11)
        {
            printf("You win!\n");
            return 0;
        }
        else if (sum == 2 || sum == 3 || sum == 12)
        {
            printf("You lose!\n");
            return 0;
        }
        else
        {
            return 1; // Continue the game
        }
    case 1:
        if (sum == point)
        {
            printf("You win!\n");
            return 0;
        }
        else if (sum == 7)
        {
            printf("You lose!\n");
            return 0;
        }
        else
        {
            return 1;
        }
    }
    return 0;
}

int main(void)
{
    srand(time(0)); // Initialize the random number generator once.

    DiceResult result = Rolling_dice();
    int point = result.dice1 + result.dice2;
    int continue_game = judge(0, result, point);

    if (continue_game == 1)
    {
        printf("Your point is: %d\n", point);
    }

    while (continue_game == 1)
    {
        result = Rolling_dice();
        continue_game = judge(1, result, point);
    }

    return 0;
}
