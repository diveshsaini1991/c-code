#include<stdio.h>
#include<string.h>
struct student
{
    char name[30];
    int roll;
    float marks;

};
int main(){
    struct student s1,s2,s3,s4,s5;
    
    
    strcpy(s1.name,"rahul");
    printf("Enter 1st student roll No.: ");
    scanf("%d",&s1.roll);
    printf("Enter 1st student marks: ");
    scanf("%f",&s1.marks);

    strcpy(s2.name,"rajat");
    printf("Enter 2nd student roll No.: ");
    scanf("%d",&s2.roll);
    printf("Enter 2nd student marks: ");
    scanf("%f",&s2.marks);
    
    strcpy(s3.name,"ankur");
    printf("Enter 3rd student roll No.: ");
    scanf("%d",&s3.roll);
    printf("Enter 3rd student marks: ");
    scanf("%f",&s3.marks);

    strcpy(s4.name,"aman");
    printf("Enter 4th student roll No.: ");
    scanf("%d",&s4.roll);
    printf("Enter 4th student marks: ");
    scanf("%f",&s4.marks);

    strcpy(s5.name,"sahil");
    printf("Enter 5th student roll No.: ");
    scanf("%d",&s5.roll);
    printf("Enter 5th student marks: ");
    scanf("%f",&s5.marks);
    
    puts(s1.name);
    printf(" got %.2f marks and his roll No. is %d\n",s1.marks,s1.roll);

    puts(s2.name);
    printf(" got %.2f marks and his roll No. is %d\n",s2.marks,s2.roll);

    puts(s3.name);
    printf(" got %.2f marks and his roll No. is %d\n",s3.marks,s3.roll);
}
