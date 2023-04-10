#include<stdio.h>
int main(){
    int num;
    for (int i = 0; i < 5; i++)
    {
        printf("we are in %d\'th for loop\n",1);
        for (int j = 0; j < 5; j++)
        {
            printf("enter 0 to exit , else it will take input: \n");
            scanf("%d",&num);
            if (num==0)
            {
                goto end;
            }
            
        }
        
    }
    end:
    printf("we are at end");
    
}