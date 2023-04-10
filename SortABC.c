#include <stdio.h>
int main()
{
    int n, t;
    printf("Enter no. of elements: ");
    scanf("%d", &n);
    char ar[n];
    for (int i = 0; i < n; i++)
    {
        getchar();
        printf("Enter element: ");
        scanf("%c", &ar[i]);
    }
    for (int q = 0; q < n; q++)
    {
        for (int w = q + 1; w < n; w++)
        {
            if (ar[q] > ar[w])
            {
                t = ar[q];
                ar[q] = ar[w];
                ar[w] = t;
            }
        }
    }
    for (int k = 0; k < n; k++)
    {
        printf("%c ", ar[k]);
    }
}