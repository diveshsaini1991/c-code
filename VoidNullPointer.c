#include<stdio.h>
int main(){

    //void pointer
    int a=10;
    float b=3.3;
    void *ptr;
    ptr=&a;
    printf("Value of a is %d\n",*((int*)ptr));
    ptr=&b;
    printf("Value of b is %f\n",*((float*)ptr));


    //NULL pointer
    int i=34;
    int *pt=NULL;
    pt=&i;
    if (pt!=NULL)
    {
        printf("The address of a is %d\n",pt);
        printf("The value of a is %d\n",*pt);
    }
    else
    {
        printf("The pointer is a null pointer so can not be derefernced");

    }
    
    


}