#include <stdio.h>
int main() {
     int unit,amount;
     scanf("%d",&unit);
     if(unit<=100){
        amount=unit*1;
     }
     else {
        amount=unit*2;
     }
     printf("%d",amount);
    
    return 0;
}