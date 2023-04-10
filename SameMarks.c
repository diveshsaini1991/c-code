#include<stdio.h>
int main(){
    int n,p=0;
    printf("Enter no. of students: ");
    scanf("%d", &n);
    float ar[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter marks of %d student: ", i + 1);
        scanf("%f", &ar[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (ar[i]==ar[j])
            {
                p=1;

                break;
            }
            
        }
        
    }
    if (p==1)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    
    

    
}