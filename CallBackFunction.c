#include<stdio.h>
int sum(int a,int b){
    return a+b;

}
void gm(int (*ptr)(int,int)){
    printf("Good Morning\n");
    printf("The sum of 4 and 5 is %d\n",ptr(4,5));

}
void hlo(int (*ptr)(int,int)){
    printf("hlo\n");
    printf("The sum of 4 and 5 is %d\n",ptr(4,5));

}

int main(){
    int (*ptr)(int,int);
    ptr=sum;
    gm(ptr);
    
}