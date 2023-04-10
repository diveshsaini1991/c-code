#include<stdio.h>
int main(){
    int n,no,num,temp;
    printf("Enter no. of elements in an array: ");
    scanf("%d",&n);
    int ar[n];
    //input an array
    for (int i = 0; i < n; i++)
    {
        printf("Enter element: ");
        scanf("%d",&ar[i]);

    }
    printf("enter index: ");
    scanf("%d",&no);
    printf("enter number: ");
    scanf("%d",&num);
    for (int i = no; i < n+1; i++)
    {
        temp=ar[i];
        ar[i]=temp;
    }
    
    
}