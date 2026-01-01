#include <stdio.h>

int main() {
    int n, i;

    scanf("%d", &n);  // Input number

    for(i = n; i >= 1; i--) {  // i = n to 1
        printf("%d ", i);
    }

    return 0;
}
