#include <stdio.h>
int main()
{
    float r,area,cum,volume;
    printf("please enter radius: ");
    scanf("%f",&r);
    area=r*r*22/7;
    cum=2*r*22/7;
    volume=2*r*22/7;
    printf("area= %f\ncircumfrence=%f\n",area,cum);
    printf("volume =%f",volume);
}
