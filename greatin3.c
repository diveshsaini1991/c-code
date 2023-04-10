#include<stdio.h>
int main(){
    int a,b,c,g,gr;
    printf("Enter first no.: ");
    scanf("%d",&a);
    printf("Enter second no.: ");
    scanf("%d",&b);
    printf("Enter third no.: ");
    scanf("%d",&c);
    if (a>b)
    {
        g=a;
    }
    else
    {
        g=b;
    }
    if (g>c)
    {
        gr=g;
    }
    else
    {
        gr=c;
    }
    printf("The greatest no. is %d",gr);
    
}