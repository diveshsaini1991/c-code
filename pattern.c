#include<stdio.h>
int main(){
    int n,x;
    printf("Enter the hight of pattern: ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            x=(i+1)+(j*(i+1));
            printf("%d ",x);
            
            
        }
        printf("\n");
    }
    
}