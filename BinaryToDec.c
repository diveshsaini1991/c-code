#include<stdio.h>
int convert(long long bin){
    int rem,n=0;
    for (int i = 1;bin>0; i*=2)
    {
        rem=bin%10;
        n=n+(rem*i);
        bin/=10;

    }
    
    return n;
    
}
int main(){
    long long bin;
    int n;
    printf("Enter binary no.: ");
    scanf("%lld",&bin);
    n=convert(bin);
    printf("Dec no. of %lld is %d",bin,n);

}