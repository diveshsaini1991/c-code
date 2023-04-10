#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    char name[16];
    char userinput, computerinput;
    int medium, times = 3;
    int computerscore = 0, userscore = 0;

    printf("Enter your username <max = 16 chars><No Spaces>: ");
    scanf("%s", &name);
    for (int times = 0; times < times; times++)
    {
        printf("\n%s plss.. select Rock,Papers or Scissors;\n\n", name);
        printf("For Rock press'r'\n");
        printf("For Paper press'p'\n");
        printf("For Scissors press's'\n\n");
        getchar();
        scanf("%c", &userinput);

        srand(time(NULL));
        medium = rand() % 3;
        if (medium == 0)
        {
            computerinput = 'r';
            printf("\nComputer selected rock sooo...\n\n");
        }
        else if (medium == 1)
        {
            computerinput = 'p';
            printf("\nComputer selected paper sooo...\n\n");
        }
        else
        {
            computerinput = 's';
            printf("\nComputer selected scissors sooo...\n\n");
        }

        if (computerinput == userinput)
        {
            printf("<<<<<<<<Draw>>>>>>>\n\n");
            times++;
        }
        else if ((computerinput == 'r' && userinput == 'p') || (computerinput == 's' && userinput == 'r') || (computerinput == 'p' && userinput == 's'))
        {
            printf("<<<<<<<<%s wins!>>>>>>>>\n\n", name);
            userscore++;
        }
        else
        {
            printf("<<<<<<<<computer wins!>>>>>>>>\n\n");
            computerscore++;
        }

        printf("Present score is : \ncomputer >>> %d\n%s >>> %d\n\n", computerscore, name, userscore);
    }
    if (userscore > computerscore)
    {
        printf("\nFinal Winner is %s!", name);
    }
    else
    {
        printf("\nFinal Winner is Computer!\nnvm better luck next time");
    }
}