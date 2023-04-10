#include<stdio.h>
int main(){
    int a,b,t,j,k;
    
    printf("Enter the no. of elements you want: ");
    scanf("%d",&j);
    a=0;
    b=1;
    k=3;
    printf("0\n1\n");
    while (j>=k)
    {
        t=a+b;
        printf("%d\n",t);
        a=b;
        b=t;
        k++;
    }
    
    
}