#include <stdio.h>
#include <string.h>

int main() {
    char str[200];

    printf("Enter log message: ");
    fgets(str, sizeof(str), stdin);

    if (strstr(str, "error") != NULL)
        printf("Found");
    else
        printf("Not Found");

    return 0;
}