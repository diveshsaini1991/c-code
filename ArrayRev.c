#include<stdio.h>

int main(){
    int n;
    printf("Enter no. of elements of array: ");
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter %d element: ",i+1);
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < n/2; i++)
    {
        int t=arr[i];
        arr[i]=arr[n-i];
        arr[n-i]=t;

    }
    for (int i = 0; i < n; i++)
    {
        printf("%d",arr[i]);
    }
    
    

}