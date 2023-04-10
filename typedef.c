#include<stdio.h>
typedef float f;
typedef int i;
typedef char c;
// now we can use both i and int for int and same for float and char 
typedef struct student
{
    char name[30];
    i roll;
    float marks;

} st ;


int main(){

    typedef int a;
    a v;
    i w;
    int e;
    v=1;
    w=1;
    e=1;
    //we can use all the defined ways to define a variable 
    st x,n;

    strcpy(x.name,"rahul");
    printf("Enter 1st student roll No.: ");
    scanf("%d",&x.roll);
    printf("Enter 1st student marks: ");
    scanf("%f",&x.marks);

    strcpy(n.name,"rajat");
    printf("Enter 2nd student roll No.: ");
    scanf("%d",&n.roll);
    printf("Enter 2nd student marks: ");
    scanf("%f",&n.marks);


}