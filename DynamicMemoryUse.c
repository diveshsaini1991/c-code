#include<stdio.h>
#include<stdlib.h>
int main (){
    int c,i=0;
    char *ptr;
    while (i<3)
    {
        printf("Enter no of chars in your id: ");
        scanf("%d",&c);
        ptr=(char*)malloc((c+1)*sizeof(char));
        printf("Enter yout id: ");
        scanf("%s",ptr);
        printf("Your id is %s\n",ptr);
        free(ptr);
        i++;
    }
    
}