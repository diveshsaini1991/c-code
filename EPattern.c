#include<stdio.h>
int main(){
    int n;
    printf("Enter value: ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        if (i==0||i==n-1||i==n/2)
        {
            printf("*****");
        }
        else
        {
            printf("*");
        }
        printf("\n");     
    }
    
}