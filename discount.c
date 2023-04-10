#include<stdio.h>
int main(){
    int q,r,cost,fcost,d;

    printf("Enter the Quantity: ");
    scanf("%d",&q);
    printf("Enter the rate: ");
    scanf("%d",&r);
    cost=q*r;
    if (q>=1000)
    {
        d=(cost/10);
        fcost=cost-d;

    }
    else
    {
        fcost=cost;
        d=0;
    }
    printf("Your discount: %d\nYour final cost: %d",d,fcost);
    return 0;
    
    

}