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
    int n, a;
    printf("Enter no.: ");
    scanf("%d", &n);

    a = CheckFibo(n);
    if (a == 1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}