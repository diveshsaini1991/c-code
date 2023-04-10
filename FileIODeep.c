#include <stdio.h>
int main()
{
    FILE *ptr = NULL;

    //<<<<get>>>>

    // ptr=fopen("MyFile.txt","r");

    //////fgetc////////

    // char c=fgetc(ptr);
    // printf("The char i read was %c\n",c);
    // c=fgetc(ptr);
    // printf("The char i read was %c\n",c);

    ///////fgets////////

    // char c[5];
    // fgets(c,5,ptr);
    // printf("The string i read was %s\n",c);
    // fclose(ptr);

    //<<<<put>>>>

    ////////fputc////////

    ptr = fopen("MyFile.txt", "r+");
    fputc('H', ptr);
    fputs("i this is it!", ptr);

    /*
        different modes
        r  = only read
        w  = only write <dlt all exixting content>
        a  = only append elements in the end
        r+ = can read and write both but the writen text is added in starting <<<replacing>>> all the starting elements
        w+ = can read and write both but the writen elements are added by deleting all the existing content
        a+ = can read and write both but the written content gets appended in the end    
    
    */

    return 0;
}