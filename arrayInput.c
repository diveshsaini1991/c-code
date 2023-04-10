#include<stdio.h>
int main(){
    //1d array
    int r;
    printf("Enter no of elements in array: ");
    scanf("%d",&r);
    int ar[r];
    for (int i = 0; i < r; i++)
    {
        printf("Enter element number %d: ",i+1);
        scanf("%d",&ar[i]);
    } 
    for (int i = 0; i < r; i++)
    {
        printf("%d ",ar[i]);
    }
    printf("\n");
    
    //2d array
    int row,col;
    printf("Enter no. of rows: ");
    scanf("%d",&row);
    printf("Enter no. of elements in each row: ");
    scanf("%d",&col);
    int li[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("enter element on row %d ,col %d: ",i+1,j+1);
            scanf("%d ",&li[i][j]);
        }
        
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d",li[i][j]);
        }
        printf("\n");
        
    }
    
    
}