#include<stdio.h>
int main (){
    //take string from developer
    char name[7]="Divesh";
    char Name[7]={'D','i','v','e','s','h','\0'};
    printf("%s\n%s\n",name,Name);


    //take string from user
    char n[50];
    printf("Enter your name: ");
    gets(n);
    printf("%s\n",n);
    puts(n); //print string
}