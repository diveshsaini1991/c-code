#include <stdio.h>
int main()
{
    // for square matrix only
    int n;
    printf("Enter length of a matrix: ");
    scanf("%d", &n);
    int m1[n][n];
    // inputing 1st matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter %d %d element: ", i + 1, j + 1);
            scanf("%d", &m1[i][j]);
        }
    }

    // inputing 2nd matrix
    int m2[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter %d %d element of second matrix: ", i + 1, j + 1);
            scanf("%d", &m2[i][j]);
        }
    }

    // adding 2 matrix
    int f[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            f[i][j] = m1[i][j] + m2[i][j];
        }
    }

    // printing result

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", f[i][j]);
        }
        printf("\n");
    }
}