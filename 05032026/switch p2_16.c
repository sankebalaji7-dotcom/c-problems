#include <stdio.h>

int main() {
    int class, weight, charge = 0;

    scanf("%d %d", &class, &weight);

    switch(class) {
        case 1:
            charge = weight * 300;
            break;

        case 2:
            if(weight > 3)
                charge = (weight - 3) * 300;
            else
                charge = 0;
            break;
    }

    if(charge == 0)
        printf("Free");
    else
        printf("Extra Baggage Charge%d", charge);

    return 0;
}