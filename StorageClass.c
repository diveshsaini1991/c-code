#include<stdio.h>
//this is a external var
int c=2;


int fun(){ 
    //this is a static var its scope is local ;;till code runs
    static int d=1;
}

int main(){
    //this is a auto var  
    auto int a=2;
    int b=29;
    
    //this is a static var
    static int d=1;
    
    //how to use global var in func
    extern int c;
    printf("%d\n",c);




}