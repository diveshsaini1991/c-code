#include<stdio.h>
int main()
{
    int gross_pay,da,hra,basic;
    printf("Enter your basic pay: ");
    scanf("%d",&basic);
    if(basic<=10000)
    {
        da=basic*0.8;
        hra=basic*0.2;
    }
    else if (basic<=20000)
    {
        da=basic*0.9;
        hra=basic*0.25;
    }
    else
    {
        da=basic*0.95;
        hra=basic*0.3;
    }
    gross_pay=basic+hra+da;
    printf("Gross pay: %d",gross_pay);
    

    return 0;
}