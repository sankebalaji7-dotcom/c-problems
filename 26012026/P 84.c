#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    if (str[0] >= 'a' && str[0] <= 'z') {
        str[0] = str[0] - 32;   // convert to uppercase
    }

    printf("%s", str);
    return 0;
}