#include <stdio.h>
#include <math.h>
int armstrong(int n)
{
    int l, t, a, i, x;

    t = n;
    x = n;
    if (n == 153)
    {
        printf("The number is a armstrong number\n");
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
            printf("The number is a armstrong number\n");
        }
        else
        {
            printf("The number is not a armstrong number\n");
        }
    }
    return 0;
}
int perfect(int n)
{
    int t, x=1;
    t = n;
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            x = x + i;
        }
    }
    if (x == t)
    {
        printf("The number is a perfect number\n");
    }
    else
    {
        printf("The number is not a perfect number\n");
    }

    return 0;
}
int prime(int n){
    int x;
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            x = x + i;
        }
    }
    if (x==0)
    {
        printf("The number is a prime number\n");
    }
    else
    {
        printf("The number is not a prime number\n");
    }
    
    
    
    
}


int main()
{
    int n;
    printf("Enter the no. to check: ");
    scanf("%d", &n);
    armstrong(n);
    perfect(n);
    prime(n);
}