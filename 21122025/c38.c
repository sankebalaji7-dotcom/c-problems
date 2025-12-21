#include <stdio.h>
int main() {
    int amount,discount;
    scanf("%d",&amount);
    if(amount>=10000){
        discount=amount-(amount*20/100);
    }
    else if(amount>=5000){
        discount=amount-(amount*10/100);
    }
    else{
        discount=amount-(amount*5/100);
    }
    printf("%d",discount);
    return 0;
}