#include<stdio.h>
int main(){
    int n,i,a,x,t;
    printf("Enter the no. here: ");
    scanf("%d",&n);
    t=n;
    for (i = 0; n > 0; i++)
    {
        n=n/10;
    }
    printf("Length of number is %d \n",i);
    
    for (int j = 0; j < i; j++)
    {
        x=t%10;
        a=(a*10)+x;
        t=t/10;
    }
    printf("reverse of the no. is %d",a);

    

}