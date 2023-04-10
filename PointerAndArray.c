#include<stdio.h>
int main(){
    int arr[4]={1,2,3,4};
    int* ar=&arr[0];
    int* ar1=&arr[1];
    int* ar2=&arr[2];
    int* ar3=&arr[3];
    printf("%d\n",ar);
    printf("%d\n",ar1);
    printf("%d\n",ar2);
    printf("%d\n",ar3);
    printf("%d\n",ar);
    printf("%d\n",ar+1);
    printf("%d\n",ar+2);
    printf("%d\n",ar+3);
    
}