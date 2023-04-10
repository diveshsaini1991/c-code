#include<stdio.h>

int main(){
    int list1[10];
    // ={1,2,3,4,5,6,7,8,9,0};
    int list2[10];
    for (int i = 0; i < 10; i++)
    {
        printf("efw: ");
        scanf("%d",&list1[i]);
    }
    
    for (int i = 0; i < 10; i++)
    {
        list2[i]=list1[i];
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d ",list2[i]);
    }
    printf("\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ",list1[i]);
    }
    
}