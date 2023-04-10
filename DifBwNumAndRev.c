#include<stdio.h>
int main(){
    int n,rev=0,r,num;
    printf("Enter Number: ");
    scanf("%d",&n);
    num=n;
    for (int i = 0; n > 0; i++)
    {
        r=n%10;
        rev=(rev*10)+r;
        n/=10;
    }
    printf("%d - %d = %d",num,rev,num-rev);
    
}