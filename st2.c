#include<stdio.h>
int main(){
    int n,r;
    printf("Enter the no.: ");
    scanf("%d",&n);
    int sum=0;
    for (int  i = 0; n > 0; i++)
    {
        r=n%10;
        if (i%2==0)
        {
            sum=sum+r;
        }
        else
        {
            sum=sum-r;
        }
        n/=10;
        
        
    }
    printf("%d",sum);
    
    
}