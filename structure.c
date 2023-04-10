#include<stdio.h>

//using student data type direct with it while defining
    struct student
    {
        int marks;
        char sub;
    }s1,s2;


    //using student1 data type after defining it 
    struct student1{
        int marks;
        char sub;
    };

int main(){

    struct student s3,s4;
    //passing values using dot operator 
    
    s1.marks=100;
    s1.sub='a';


    //passing values without usind dot operator
    struct student s2={10,'s'};
    
    

    
}