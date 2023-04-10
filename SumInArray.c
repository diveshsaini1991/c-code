#include<stdio.h>
void main(){
    int n,sum=0;
    printf("Enter length of array: ");
    scanf("%d",&n);

    int a[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter value of %dth element: ",i+1);
        scanf("%d",&a[i]);
    }
    for (int j = 0; j < n; j++)
    {
        sum=sum+a[j];
    }
    printf("Sum of all elements of array is %d",sum);
    
    
    
}