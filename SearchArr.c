#include<stdio.h>
int main(){
    int n,c;
    printf("Enter no. of elements: ");
    scanf("%d",&n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter elements: \n");
        scanf("%d",&ar[i]);
    }
    printf("Enter no.: ");
    scanf("%d",&c);
    for (int i = 0; i < n; i++)
    {
        if (ar[i]==c)
        {
            printf("%d %d",ar[i],i+1);
        }
        
    }
    
    
    
}