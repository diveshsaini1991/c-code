#include<stdio.h>
int main(){
    int a,b,c,t;
    scanf("%d %d %d",&a,&b,&c);
    if (b<a&&b<c)
    {
        t=a;
        a=b;
    }
    else if (c<a&&c<b)
    {
        t=c;
        a=c;
    }
    
    
}