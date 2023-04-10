#include <stdio.h>
 #include <math.h>
int main()
{
   int physics,maths,chemistry;
   float total;
   printf("enter physics marks:\n");
   scanf("%d",&physics);
   
   printf("enter maths marks:\n");
   scanf("%d",&maths);
   
   printf("enter chemistry marks:\n");
   scanf("%d",&chemistry);
   printf("%d %d %d",physics,maths,chemistry);
   
   total=(((physics+maths+chemistry)/300)*100);
   
   if((total<40)||physics<33||maths<33||chemistry<33){
       printf("grand total=%f",total);
       printf("you are fail");
   }
   else{
       printf("grand totaL:%f",total);
       printf("you are pass");
   }
}
