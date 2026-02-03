#include <stdio.h>

int calculateBonus(int years) {
    if (years <= 2)
        return 11000;
    else if (years <= 4)
        return 13000;
    else if (years <= 6)
        return 17000;
    else if (years <= 9)
        return 19000;
    else
        return 15000;
}

int main() {
    int years;
    scanf("%d", &years);

    printf("%d", calculateBonus(years));
    return 0;
}