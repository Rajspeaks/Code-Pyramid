#include <bits/stdc++.h>
#include <algorithm>

using namespace std;
void guessNum();

int main()
{

    int game;
    printf("--------------- MAIN MENU ---------------\n\n");
    printf("Enter 1 to Play\nEnter 0 to exit the programm \nEnter: ");
    scanf("%d", &game);

    switch (game)
    {
    case 0:
        exit(0);
    case 1:
        guessNum();
        break;
    default:
        system("cls");
        printf("!!!!! Enter a Valid Choice !!!!!!\n\n");
        main();
        break;
    }
}

void guessNum()
{
    system("cls");
    int cmd;
    int num, count = 1, guess = 0;
    srand(time(0));
    num = rand() % 100 + 1;

    printf("\n****** Guess The Number between 1 to 100 ****** \n");
    do
    {

        scanf("%d", &guess);

        if (guess > num)
        {
            printf("\n The number is lower than %d\n", guess);
        }
        if (guess < num)
        {
            printf("\nThe number is higher than %d\n", guess);
        }
        if (guess == num)
        {
            printf("\nYou Guessed it right in %d attempts.\n\n", count);
        }
        count++;
    } while (guess != num);

    do
    {
        printf("Press 1 to Play again or Press 2 to exit: ");
        scanf("%d", &cmd);

        if (cmd == 1)
        {
            guessNum();
        }
        else if (cmd == 2)
        {
            exit(0);
        }
        else
        {
            printf("\n\nPlease enter a valid Option.\n");
        }
    } while (cmd != 1 || cmd != 2);
}
