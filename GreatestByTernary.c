#include <stdio.h>
int main()
{
    int a, b, c, m;
    printf("Enter 1st no.: ");
    scanf("%d", &a);
    printf("Enter 2nd no.: ");
    scanf("%d", &b);
    printf("Enter 3rd no.: ");
    scanf("%d", &c);

    a > b &&a > c ? printf("%d", a) :b > a &&b > c ? printf("%d", b) : printf("%d", c);
    
}