#include<stdio.h>
#include<stdlib.h>
int main(){
    //malloc 
    // int n;
    // printf("Enter size of array you want: ");
    // scanf("%d",&n);
    // int *ptr;
    // ptr= (int*)malloc(n*sizeof(int));
    // for (int  i = 0; i < n; i++)
    // {
    //     printf("Enter %d element: ",i+1);
    //     scanf("%d",&ptr[i]);
    // }
    
    // for (int  i = 0; i < n; i++)
    // {
    //     printf("Element on %d is %d\n",i+1,ptr[i]);
    // }
    // free(ptr);
    

    //calloc
    int n1;
    printf("Enter size of array you want: ");
    scanf("%d",&n1);
    int *ptr1;
    ptr1= (int*)calloc(n1,sizeof(int));
    
    
    for (int  i = 0; i < n1; i++)
    {
        printf("Element on %d is %d\n",i+1,ptr1[i]);
    }
    // free(ptr1);


    //realloc
    int n2;
    printf("Enter size of array you want: ");
    scanf("%d",&n2);
    ptr1= (int*)realloc(ptr1,n2*sizeof(int));
    for (int  i = 0; i < n2; i++)
    {
        printf("Enter %d element: ",i+1);
        scanf("%d",&ptr1[i]);
    }
    
    for (int  i = 0; i < n2; i++)
    {
        printf("Element on %d is %d\n",i+1,ptr1[i]);
    }
    free(ptr1);

    
}