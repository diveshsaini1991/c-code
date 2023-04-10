#include<stdio.h>
int max(int ar[][], int n,int m)
{
    int max = -999999999;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
        if (ar[i][j] > max)
        {
            max = ar[i][j];
        }
        }
        
        
    }
    return max;
}
int min(int ar[][], int n,int m)
{                                                      
    int min = 999999999;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
        if (ar[i][j] < min)
        {
            min = ar[i][j];
        }
        }
        
        
    }
    return min;
}
int main(){
    int n,m,a,b;
    printf("Enter no. of Rows: ");
    scanf("%d",&n);
    printf("Enter no. of elements in one row: ");
    scanf("%d",&m);
    int ar[n][m];
    for (int i = 0; i < n; n)
    {
        for (int j = 0; j < m; j++)
        {
            printf("Enter %d %d element: ",i+1,j+1);
            scanf("%d",&ar[i][j]);
        }
    }
    a = max(ar, n,m);
    b = min(ar, n,m);
    printf("Max= %d\nMin= %d", a, b);

    
}