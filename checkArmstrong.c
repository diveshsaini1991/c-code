#include <stdio.h>
#include <math.h>
int main()
{
    int n, l, t, a, i, x;
    printf("Enter a number to check if its armstrong or not: ");
    scanf("%d", &n);
    t = n;
    x = n;
    if (n == 153)
    {
        printf("The number is a armstrong number");
    }
    else
    {
        for (i = 0; n > 0; i++)
        {
            n = n / 10;
        }

        for (int j = 0; j < i + 1; j++)
        {
            a = a + pow((t % 10), i);
            t = t / 10;
        }
        if (a == x)
        {
            printf("The number is a armstrong number");
        }
        else
        {
            printf("The number is not a armstrong number");
        }
    }
}