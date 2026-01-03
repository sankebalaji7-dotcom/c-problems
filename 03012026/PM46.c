#include <stdio.h>

int main() {
    char str[100];
    int i, length = 0;

    printf("Enter a string: ");
    scanf("%s", str);   // reads a single word

    for (i = 0; str[i] != '\0'; i++) {
        length++;
    }

    printf("Length of the string: %d", length);

    return 0;
}