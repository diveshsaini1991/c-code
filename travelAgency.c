#include <stdio.h>
#include<string.h>
struct driver
{
    char name[20];
    char no[10];
    int km;
    int year;

};

int main(){
    int n;
    printf("Enter no. of drivers info you want to put in: ");
    scanf("%d",&n);
    struct driver ar[n];
    for (int i = 0; i < n; i++)
    {
    printf("\nEnter info of driver no. %d\n\n",i+1);
        
    printf("Enter name of driver: ");
    scanf("%s",&ar[i].name);
    
    printf("Enter licence no. of driver: ");
    scanf("%s",&ar[i].no);

    printf("Enter number of Km driven by driver: ");
    scanf("%d",&ar[i].km);

    printf("Enter years of experience of driver: ");
    scanf("%d",&ar[i].year);

    }
    for (int i = 0; i < n; i++)
    {
        printf("\n\n%s's licience no. is %s he drived over %d kms in %d years.\n",ar[i].name,ar[i].no,ar[i].km,ar[i].year);
    }
    
    

}