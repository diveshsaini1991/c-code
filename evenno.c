#include<stdio.h>
int main(){
    int n,j=2,i,x=2;
    n=20;
    // for loop
    for ( i = 2; i < n+1; i+=2)
    {
        printf("%d\n",i);
    }

    // while loop

    while (j<=n)
    {
        printf("%d\n",j);
        j+=2;
    }

    // do while loop

    do
    {
        printf("%d\n",x);    
        x+=2;
    } while (x<=n);
    
    
    
}