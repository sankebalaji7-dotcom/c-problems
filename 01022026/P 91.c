#include <stdio.h>

int calculateBill(int units) {
    int bill = 0;

    if (units <= 50)
        bill = units * 25;
    else if (units <= 100)
        bill = (50 * 25) + (units - 50) * 5;
    else if (units <= 150)
        bill = (50 * 25) + (50 * 5) + (units - 100) * 7;
    else
        bill = (50 * 25) + (50 * 5) + (50 * 7) + (units - 150) * 10;

    return bill;
}

int main() {
    int units;

    scanf("%d", &units);
    printf("%d", calculateBill(units));

    return 0;
}