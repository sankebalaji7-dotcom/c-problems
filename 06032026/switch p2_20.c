#include <stdio.h>
int main() {
   int role,time;

   scanf("%d %d",&role,&time);
   switch(role);
   case 1:

   printf("Full access");
   break;
   case 2:
   if(time>=9 && time<=18){
    printf("limited access");
   }
   else{
    printf("Access denied");
   }
   break;
   default:
   printf("Access denied");
    
    return 0;
}