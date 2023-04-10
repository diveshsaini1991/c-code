#include<stdio.h>
int main(){
    int maths,che,phy,final;
    printf("Enter your maths marks: \n");
    scanf("%d",&maths);
    printf("Enter your phy marks: \n");
    scanf("%d",&phy);
    printf("Enter your che marks: \n");
    scanf("%d",&che);
    
    
    
    if(maths>90)
    {
        printf("Best in maths \n");

    }
    else if(maths>80)
    {
        printf("Better in maths \n");

    }
    else if(maths>60)
    {
        printf("Good in maths \n");

    }
    else
    {
        printf("Fail in maths \n");

    }
    if(phy>90)
    {
        printf("Best in phy \n");

    }
    else if(phy>80)
    {
        printf("Better in phy \n");

    }
    else if(phy>60)
    {
        printf("Good in phy \n");

    }
    else
    {
        printf("Fail in phy \n");

    }
    if(che>90)
    {
        printf("Best in che \n");

    }
    else if(che>80)
    {
        printf("Better in che \n");

    }
    else if(che>60)
    {
        printf("Good in che \n");

    }
    else
    {
        printf("Fail in che \n");

    }
    final=(maths+phy+che)/3;
    if(maths<60||phy<60||che<60)
    {
    printf("fail in final \n");

    }
    else
    {
    if(final>90)
    {
        printf("Best in final \n");

    }
    else if(final>80)
    {
        printf("Better in final \n");

    }
    else if(final>60)
    {
        printf("Good in final \n");

    }
    else
    {
        printf("Fail in final \n");

    }
    }
    
    
    
    

    return 0;

}