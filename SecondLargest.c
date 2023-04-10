#include<stdio.h>
int main(){
    int n,l=0,s=0;
    printf("Enter no. of elements in an array: ");
    scanf("%d",&n);
    int ar[n];
    //input an array
    for (int i = 0; i < n; i++)
    {
        printf("Enter element: ");
        scanf("%d",&ar[i]);

    }
    for (int i = 0; i < n; i++)
    {
        
        if (ar[i]>l)
        {
            s=l;
            l=ar[i];
        }
        
    }
    printf("%d\n%d",s,l);

    


    
}