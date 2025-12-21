#include <stdio.h>
int main() {
    int selling_price,cost_price;
    scanf("%d",&selling_price);
    scanf("%d",&cost_price);
    if(selling_price>=cost_price){
        printf("loss");
    }
    else {
        printf("profit");
    }
    
    return 0;
}