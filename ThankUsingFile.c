#include<stdio.h>
int main(){
    char a[10];
    char b[10];
    char c[10];
    char d[10];
    char e[10];
    printf("Enter buyer name: ");
    scanf("%s",&a);
    getchar();
    printf("Enter product name: ");
    scanf("%s",&b);
    getchar();
    printf("Enter location near buyer: ");
    scanf("%s",&c);
    getchar();
    printf("Enter seller name who sell him the product: ");
    scanf("%s",&d);
    getchar();
    printf("Enter domain name in which he buy the product: ");
    scanf("%s",&e);
    getchar();
    // printf("%s",a);
    // printf("%s",b);
    // printf("%s",c);
    // printf("%s",d);
    // printf("%s",e);
    FILE *ptr =NULL;
    ptr=fopen("Thanks.txt","w");
    fputs("Thanks for buing our product mr. ",ptr);
    fputs(a,ptr);
    fputs(". Hope you enjoy playing with our ",ptr);
    fputs(b,ptr);
    fputs(". For any kind of issues contact our service center in ",ptr);
    fputs(c,ptr);
    fputs(". Hope you like dealing with mr. ",ptr);
    fputs(d,ptr);
    fputs(". Plsss give us another chance to deal with you for ",ptr);
    fputs(e,ptr);
    fputs(" products.",ptr);

}