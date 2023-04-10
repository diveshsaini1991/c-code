#include<stdio.h>
int add(){
    int a,b,c;
    printf("Enter 1st no.: ");
    scanf("%d",&a);
    printf("Enter 2nd no.: ");
    scanf("%d",&b);
    c=a+b;
    printf("Sum of %d and %d is %d",a,b,c);
    return 0;
}
int main(){
    int i =10;
    int j=3;
    int h=i+j;
    int d= add();
    int n=i-j;
}
