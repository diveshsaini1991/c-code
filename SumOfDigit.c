#include<stdio.h>
int main(){
    int num,temp,sum;
    printf("Enter the no.: ");
    scanf("%d",&num);
    
    sum=0;
    for (int i = 0; num > 0; i++)
    {
        temp=num%10;
        sum=sum+temp;
        num/=10;
        
    }
    printf("%d",sum);
    
}