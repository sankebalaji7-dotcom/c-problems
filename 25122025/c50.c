#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (a > b) {
        printf("A is greater than B");
    } else {
        printf("B is greater than or equal to A");
    }

    return 0;
}
