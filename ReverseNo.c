#include <stdio.h>
int main()
{
    int x=10, y = 4;
    int v= ++x + x-- + y++  ;
    printf("%d",v);
}