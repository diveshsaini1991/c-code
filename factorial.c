#include <stdio.h>
int factorial(int b)
{
    if (b == 0 || b == 1)
    {
        return 1;
    }
    else
    {
        return (b * (factorial(b - 1)));
    }
}
int main()
{
    int a,f;
    printf("Enter the no. you want factorial off: \n");
    scanf("%d", &a);
    f=factorial(a);
    printf("Factorial of %d is %d",a,f);
}