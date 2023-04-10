#include<stdio.h>
int main(){
    int n,tt,t,s=0,c=0;
    printf("Enter the no.: ");
    scanf("%d",&n);
    for (int i = 0; n > 0; i++)
    {
        if (i%2==0)
        {
            t=n%10;
            s=s+t;
            
        }
        else
        {
            tt=n%10;
            c=c+tt;
            
        }
        n=n/10;
        
        
        
    }
    printf("%d\n%d",s,c);
    
}