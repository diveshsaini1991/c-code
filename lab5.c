#include <stdio.h>
#include <math.h>
int main()
{
    int v, u, a, t, s, b, c, h, p, operation;
    printf("Enter the value you want to calculate: \n");
    scanf("%d", &operation);
    if (operation == 1)
    {
        printf("Enter value of u: \n");
        scanf("%d", &u);
        printf("Enter value of a: \n");
        scanf("%d", &a);
        printf("Enter value of t: \n");
        scanf("%d", &t);
        v = u + (a * t);
        printf("Value of V: %d", v);
    }
    else if (operation == 2)
    {
        printf("Enter value of u: \n");
        scanf("%d", &u);
        printf("Enter value of a: \n");
        scanf("%d", &a);
        printf("Enter value of t: \n");
        scanf("%d", &t);
        s = (u * t) + (0.5 * a * t * t);
        printf("Value of S: %d", s);
    }
    else if (operation == 3)
    {
        printf("Enter value of a: \n");
        scanf("%d", &a);
        printf("Enter value of b: \n");
        scanf("%d", &b);
        printf("Enter value of c: \n");
        scanf("%d", &c);
        t = (2 * a) + (9 * c) + sqrt(b);
        printf("Value of t: %d", t);
    }
    else if (operation == 4)
    {
        printf("Enter value of b: \n");
        scanf("%d", &b);
        printf("Enter value of p: \n");
        scanf("%d", &p);

        h = sqrt(pow(b, 2)) + (p * p);
        printf("Value of h: %d", h);
    }
    else
    {
        printf("Invalid operator!");
    }
}