#include<stdio.h>

int main(int argc, char const *argv[])
{
    /*
    .\CommandLineArgs.exe hlo bro 
    <<this is how to give a command line argument 
    type this in terminal>>
    */
    for (int i = 0; i < argc; i++)
    {
        printf("The argument at index no. %d is %s\n",i,argv[i]);
    }
    
    return 0;
}
