#include <stdio.h>
int main(){
    int a,n100,n1,n2,n5,n10,n50,r,r1,r2,r3,r4;
    printf("Enter the amount here: \n");
    scanf("%d",&a);
    n100=a/100;
    r=a-(n100*100);
    n50=r/50;
    r1=r-(n50*50);
    n10=r1/10;
    r2=r1-(n10*10);
    n5=r2/5;
    r3=r2-(n5*5);
    n2=r3/2;
    r4=r3-(n2*2);
    n1=r4;
    printf("100 note: %d\n50 note: %d\n10 note: %d\n5 note: %d\n2 note: %d\n1 note: %d\n",n100,n50,n10,n5,n2,n1);
    return 0;



}