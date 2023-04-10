#include<stdio.h>
#include<stdlib.h>
int* func(){
    int a,b,sum ;
    a=3;
    b=4;
    sum=a+b;
    return &sum;

}
int main(){

 ////////////dangiling pointer////////////

    //case 1: de allocate a memory block
    int* ptr;
    ptr=(int*)malloc(7*sizeof(int));
    ptr[0]=21;
    ptr[0]=3;
    ptr[0]=41;
    ptr[0]=7;
    free(ptr);//now ptr is a dangling pointer

    //case 2: function returning local variable address

    int *dangptr=func();//dangptr is a dangling pointer coz sum is a local var and it is already freed

    //case 3: if a var goes out of scope

    int *pt;
    {
        int x=4;
        pt=&x;

    }
    //now out of this brackets pt is now dangling pointer as it is pointing to a freed memory as var is out of scope



    //////////////wild pointer//////////////


    //an uninitilized pointer is called a wild pointer
    int v=13;
    int *ptr2;//this is now a wild pointer<pointing to any random memory location>
    ptr2=34;//its not a good thing to do
    ptr2=&v;//now this is no longer wild




}