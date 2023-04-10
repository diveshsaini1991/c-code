#include<stdio.h>
int main(){
    // for square matrix only
    int n;
    printf("Enter length of a matrix: ");
    scanf("%d", &n);
    int m1[n][n];
    // inputing 1st matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter %d %d element: ", i + 1, j + 1);
            scanf("%d", &m1[i][j]);
        }
    }
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d  ",m1[i][j]);
            sum=sum+m1[i][j];
        }
        printf("= %d\n",sum);
        sum=0;
        
    }
}