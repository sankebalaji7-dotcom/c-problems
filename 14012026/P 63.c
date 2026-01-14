#include <stdio.h>

int main() {
    int a, b, i, j, f;
    scanf("%d %d", &a, &b);

    for(i = a; i <= b; i++) {
        if(i < 2) continue;
        f = 1;
        for(j = 2; j * j <= i; j++) {
            if(i % j == 0) {
                f = 0;
                break;
            }
        }
        if(f) printf("%d ", i);
    }
    return 0;
}