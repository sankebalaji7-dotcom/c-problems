#include <stdio.h>
int main() {
    int vehicletypes;
    int trip;
    int price;

    scanf("%d",&vehicletypes);
    scanf("%d",&trip);

    switch(vehicletypes){
      
      case 1:
      if(trip==1){
        price=100*trip;
      }
      else if(trip>=2 && trip<=10){
        price=800;
        
      }
      break;
      case 2:
      if(trip>=1 && trip<=30){
        price=trip*240;
      }
        
    }
    printf("%d",price);
    return 0;
}