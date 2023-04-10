#include<stdio.h>
#include<math.h>
float EDistance(int x1,int x2,int y1,int y2){
    return sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));    
}
float area(int x1,int x2,int y1,int y2){
    float (*ptr)(int,int,int,int);
    ptr=EDistance;
    float r=ptr(x1,x2,y1,y2);
    return 3.14*r*r;
}
int main(){
    float (*ptr)(int,int,int,int);
    
    int x1,x2,y1,y2;
    printf("Enter value of x1:");
    scanf("%d",&x1);
    printf("Enter value of x2:");
    scanf("%d",&x2);
    printf("Enter value of y1:");
    scanf("%d",&y1);
    printf("Enter value of y2:");
    scanf("%d",&y2);

    
    ptr=area;
    printf("The euclidean distance b/w these points is %f\n",ptr(x1,x2,y1,y2));
}