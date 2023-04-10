#include <stdio.h>

int max(int ar[], int n)
{
    int max = -999999999;
    for (int i = 0; i < n; i++)
    {
        if (ar[i] > max)
        {
            max = ar[i];
        }
    }
    return max;
}
int min(int ar[], int n)
{
    int min = 999999999;
    for (int i = 0; i < n; i++)
    {
        if (ar[i] < min)
        {
            min = ar[i];
        }
    }
    return min;
}
int main()
{
    int n, M, m;
    printf("Enter size of arr: ");
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter %d element: ", i + 1);
        scanf("%d", &ar[i]);
    }
    M = max(ar, n);
    m = min(ar, n);
    printf("Max= %d\nMin= %d", M, m);
}