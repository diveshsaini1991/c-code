#include<stdio.h>
int area(){
    float r,area,cum;
    printf("please enter radius: ");
    scanf("%f",&r);
    area=r*r*22/7;
    cum=2*r*22/7;
    printf("area= %.2f\ncircumfrence=%.2f\n",area,cum);
}
int main(){
    area();
    
}