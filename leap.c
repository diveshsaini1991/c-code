#include <stdio.h>
int main()
{
    int a;
    printf("Enter the year: ");
    scanf("%d", &a);
    if (a % 4 == 0)
    {
        if (a % 100 == 0)
        {
            if (a % 400 == 0)
            {
                printf("Is a leap year");
            }
            else
            {
                printf("Not a leap year");
            }
        }
        else
        {
            printf("Is a leap year");
        }
    }
    else
    {
        printf("Not a leap year");
    }
}