#include<stdio.h>
int main(){
    int n,m,ev=0,od=0,i,j;
    printf("Enter n:");
    scanf("%d",&n);
    printf("Enter m:");
    scanf("%d",&m);
    int arr[n][m],ar[n][m];
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < m; j++)
        {
            printf("Enter %d %d element: ",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
        
    }
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < m; j++)
        {
            ar[i][j]=arr[j][i];
            
            
        }
        
    }
    printf("Before change: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
        
    }
    printf("After change: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ",ar[i][j]);
        }
        printf("\n");
        
    }
    
    
    
}
