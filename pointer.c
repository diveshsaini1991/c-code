#include<stdio.h>
int main(){
    int a;
    int *ptr;
    a=5;
    ptr=&a;
    int *p2=NULL;
    int *p3;


    printf("The value of a is %d\n",a);
    printf("The value of address of a is %x\n",ptr);
    printf("The value of address of a is %p\n",ptr);
    printf("The value of address of a is %p\n",&a);
    printf("The value of address of pointer of a is %p\n",&ptr);
    printf("The value of address of null pointer is %p\n",p2);
    printf("The value of address of garbage pointer is %p\n",p3);
    printf("The value of a is %d\n",*ptr);
}