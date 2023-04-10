#include <stdio.h>
int main()
{
    int n;
    printf("Enter size : ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n + i; j++)
        {
            if (j < n - i - 1)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < (2 * n) - i - 2; j++)
        {
            if (j < i + 1)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }
}