#include <stdio.h>
int main() {
    int type;
    int hour;
    int price=0;
   
    scanf("%d",&type);
    scanf("%d",&hour);

    switch(type){

      case 1:
       price=10*hour;
       printf("bike parking %d",price);
      break;
      case 2:
        price=20*hour;
      printf("car parking %d",price);
      break;
      default:
      printf("default range");


    }
    
    return 0;
}