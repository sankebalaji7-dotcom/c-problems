#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char password[50];
    int i, upper = 0, lower = 0, digit = 0;

    printf("Enter password: ");
    scanf("%s", password);

    if (strlen(password) < 8) {
        printf("Weak password\n");
        return 0;
    }

    for (i = 0; password[i] != '\0'; i++) {
        if (isupper(password[i]))
            upper = 1;
        else if (islower(password[i]))
            lower = 1;
        else if (isdigit(password[i]))
            digit = 1;
    }

    if (upper && lower && digit)
        printf("Strong password\n");
    else
        printf("Weak password\n");

    return 0;
}