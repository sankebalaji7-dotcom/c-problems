#include <stdio.h>
int main() {
  int seattype;
  int showtype;
    int price;
    scanf("%d",&seattype);
    scanf("%d",&showtype);

    switch(seattype){
      case 1:
       price=150;
      
      break;
       case 2:
       price=250;
       break;

    if(showtype>=18){

      price=price+50;
    }
    }
    printf("ticket price=%d",price);
    
    return 0;
}