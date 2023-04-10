#include<stdio.h>
#include<string.h>
int main(){
    char s1[]="Divesh ";
    char s2[]="Saini";
    char s3[]=" hlo";
    char s4[50];
    printf("%d\n",strcmp(s1,s2));
    puts(strcat(s1,s2));
    printf("%d\n",strlen(s3));
    puts(strrev(s1));
    strcpy(s4,strcat(s1,s3));
    puts(s4);
}