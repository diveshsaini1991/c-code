#include<stdio.h>
int main(){
    int a,i,j;
    i=1;

    printf("Enter the number you want table of: ");
    scanf("%d",&a);
    printf("Enter the no to which you want the table: ");
    scanf("%d",&j);
    // printf("%d x 1 = %d\n",a,a);
    // printf("%d x 2 = %d\n",a,a*2);
    // printf("%d x 3 = %d\n",a,a*3);
    // printf("%d x 4 = %d\n",a,a*4);
    // printf("%d x 5 = %d\n",a,a*5);
    // printf("%d x 6 = %d\n",a,a*6);
    // printf("%d x 7 = %d\n",a,a*7);
    // printf("%d x 8 = %d\n",a,a*8);
    // printf("%d x 9 = %d\n",a,a*9);
    // printf("%d x 10 = %d\n",a,a*10);
    
    while (i<=j)
    {
        printf("%d x %d = %d\n",a,i,a*i);
        i++;
    }
    return 0;
}