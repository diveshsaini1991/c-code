#include<stdio.h>
int main(){
    int n,m,ev=0,od=0,i,j;
    printf("Enter n:");
    scanf("%d",&n);
    printf("Enter m:");
    scanf("%d",&m);
    int arr[n][m];
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
            if (arr[i][j]%2==0)
            {
                ev=ev+arr[i][j];
            }
            else
            {
                od=od+arr[i][j];
            }
            
            
        }
        
    }
    printf("odd=%d\n",od);
    printf("even=%d",ev);
    
    
}