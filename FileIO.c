#include<stdio.h>
int main(){
    FILE *ptr=NULL;
    /////// writing in a file ////////
    // char string[34]="this is added by code\n";
    // ptr=fopen("MyFile.txt","w");
    // fprintf(ptr,"%s",string);

    /////// appending in a file ////////
    char string[34]="this is added by code\n";
    ptr=fopen("MyFile.txt","a");
    fprintf(ptr,"%s",string);


    /////// reading a file //////
    //char string[34];
    // ptr=fopen("MyFile.txt","r");
    // fscanf(ptr,"%s",string);
    // printf("The content of this file is %s",string);
    
    // fclose(ptr);
}