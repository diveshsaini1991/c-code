#include<stdio.h>
int main(){
    int total,year,week,day,rest;
    printf("Enter total no. of days: ");
    scanf("%d",&total);
    year=total/365;
    rest=total-(year*365);
    week=rest/7;
    day=rest-(week*7);
    printf("%d years %d weeks %d days",year,week,day);
}