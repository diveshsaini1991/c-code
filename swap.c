#include<stdio.h>
int main(){
    int a,b,t;
    printf("Enter first no.: ");
    scanf("%d",&a);
    printf("Enter second no.: ");
    scanf("%d",&b);
    t=a;
    a=b;
    b=t;
    printf("%d %d",a,b);
}