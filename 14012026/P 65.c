#include <stdio.h>

int main() {
    int n, b = 0, p = 1;
    scanf("%d", &n);

    while(n > 0) {
        b += (n % 2) * p;
        p *= 10;
        n /= 2;
    }

    printf("%d", b);
    return 0;
}