#include<stdio.h>
int sum(int a,int b){
    return a+b;

}
int main(){
    int (*ptr)(int,int);//here is how to declare a function 1st int is for the return type of the function other int's are for the args of the function
    ptr=&sum;//defining a function pointer
    int c=(*ptr)(4,5);//using a function pointer
    printf("%d",c);
    return 0;

}