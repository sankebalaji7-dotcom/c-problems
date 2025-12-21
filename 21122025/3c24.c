#include <stdio.h>
int main() {
    int bill;
    int discount;
    scanf("%d",&bill);
    if(bill>5000){
         discount=bill-(bill*10/100);
    }
    else{
        discount=bill-(bill*5/100);
    }
    printf("%d",discount);
    return 0;
}