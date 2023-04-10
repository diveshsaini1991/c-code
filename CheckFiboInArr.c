#include <stdio.h>
int CheckFibo(int n)
{

    int a = 1, b = 1, c = 0;
    for (int i = 0; c < n; i++)
    {

        c = a + b;
        a = b;
        b = c;
    }

    if (c == n)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n, s = 0;
    printf("Enter no. of elements: ");
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter element: ");
        scanf("%d", &ar[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (CheckFibo(ar[i]) == 1)
        {
            printf("True\n");
            s++;
        }
        else
        {
            printf("False\n");
        }
    }
    printf("%d elements are fibo out of %d elements", s, n);
}