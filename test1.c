#include<stdio.h>
#include<math.h>
int main(){
    float a,b;
    printf("Enter number here: \n");
    scanf("%f",&a);
    b=cbrt(a);
    printf("cube root of number is %.2f",b);
}