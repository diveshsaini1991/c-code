#include<stdio.h>
#include<stdlib.h>
int main(){
    int a,i=0;
    int *i2;
    while (i<1000000)
    {
        printf("h ");
        i2=malloc(999999*sizeof(int));//it will allocate memory but we have nothing to free up memory
        if (i%1000==0)
        {
            getchar();
        }
        i++;
        /*
        that not in use non freed up memory blocks is called memory leak
        */
    }
    return 0;
}