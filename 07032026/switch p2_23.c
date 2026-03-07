#include <stdio.h>

int main() {
    int customerType;
    float billAmount, pay;

    scanf("%d %f", &customerType, &billAmount);

    switch(customerType) {
    case 1:
     pay = billAmount - (billAmount * 5 / 100);
    break;
    case 2:
     pay = billAmount - (billAmount * 15 / 100);
    break;
    default:
     pay = billAmount;
    }

    printf("Pay %.0f", pay);

    return 0;
}