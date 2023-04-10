#include<stdio.h>
int main(){
    int n,t,sum;
    printf("Enter a number: ");
    scanf("%d",&n);
    t=1;
    sum=0;
    while(t<=n){
        sum=sum+t;
        t++;

    }
    printf("The sum of first %d natural numbers is %d",n,sum);

}