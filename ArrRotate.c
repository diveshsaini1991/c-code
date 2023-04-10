#include<stdio.h>
int main(){
    int n,t;
    printf("Enter no of elements in array: ");
    scanf("%d",&n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter element number %d: ",i+1);
        scanf("%d",&ar[i]);
    } 
    for (int k = 0; k < n-1; k++)
    {
        t=ar[0];
        for (int i = 0; i < n-1; i++)
        {
        ar[i]=ar[i+1];
        
        }
        ar[n-1]=t;
    }
    
    



    for (int i = 0; i < n; i++)
    {
        printf("%d ",ar[i]);
    }
    
}
