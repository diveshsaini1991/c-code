#include<stdio.h>
int main(){
    int first,second,temp;
    printf("Enter first value: ");
    scanf("%d",&first);
    printf("Enter second value: ");
    scanf("%d",&second);
    temp=first;
    first=second;
    second=temp;
    printf("value of first: %d\nvalue of second: %d",first,second);
}