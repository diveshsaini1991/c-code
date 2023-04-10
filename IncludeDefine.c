#include<stdio.h>     //system header file
#include"ArrayCopy.c" //local header file
#define PI 3.14       //PI will be replaced with 3.14 while preprocessing
#define square(r)r*r  //defining a macro <it is used as a function but in real the code is replaced in preprocessing
/* how to use them
    int r=2;
    int sum=PI*square(r);

    compiler will read it as this
    int r=2;
    int sum= 3.14*r*r;

*/