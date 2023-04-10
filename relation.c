#include<stdio.h>
#include<math.h>

int main(){
    float a,b;
    printf("Enter 1st no.:\n");
    scanf("%f",&a);
    printf("Enter 2nd no.:\n");
    scanf("%f",&b);
    if (a==b&&a<b)
    {
        printf("%.1f=%.1f\n",a,b);
    }
    if (a==b||a<b)
    {
        printf("%.1f=%.1f\n",a,b);
    }
    if (a<b)
    {
        printf("%.1f<%.1f\n",a,b);
    }
    if (a>b)
    {
        printf("%.1f>%.1f\n",a,b);
    }
    if (a!=b)
    {
        printf("%.1f!=%.1f\n",a,b);
    }
    if (a<=b)
    {
        printf("%.1f<=%.1f\n",a,b);
    }
    if (a>=b)
    {
        printf("%.1f>=%.1f\n",a,b);
    }
    printf("%.1f",pow(a,b));
    

    

    
}