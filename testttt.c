#include<stdio.h>
int s(int n){
    int sum=0;
    for (int i = 0; n>0  ; i++)
    {
        int r;
        r=n%10;
        sum=sum+r;
        n=n/10;
    }
    return sum;
    
}
int main(){
    int n;
    printf("Enter no.: ");
    scanf("%d",&n);
    int sum=s(n);
    printf("%d",sum);

}