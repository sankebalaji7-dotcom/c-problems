#include <stdio.h>

int main() {
    int b, d = 0, p = 1;
    scanf("%d", &b);

    while(b > 0) {
        d += (b % 10) * p;
        p *= 2;
        b /= 10;
    }

    printf("%d", d);
    return 0;
}