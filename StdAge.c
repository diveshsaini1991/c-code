#include <stdio.h>
int main()
{
    int n;
    printf("Enter no. of students: ");
    scanf("%d", &n);
    float ar[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter age of %d student: ", i + 1);
        scanf("%f", &ar[i]);
    }
    float min = 99, max = 0, avg = 0, sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (ar[i] > max)
        {
            max = ar[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (ar[i] < min)
        {
            min = ar[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        sum = sum + ar[i];
    }
    avg = sum / n;
    printf("min= %.2f \nmax= %.2f \navg= %.2f", min, max, avg);
}