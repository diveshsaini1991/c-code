#include <stdio.h>
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
    int p[n/2];
    for (int  i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (ar[i]==ar[j])
            {
                 
            }
            
        }
        
    }
    
}