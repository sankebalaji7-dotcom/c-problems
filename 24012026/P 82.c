#include <stdio.h>
#include <ctype.h>

int main() {
    char name[100];
    int i;

    // Read the name
    fgets(name, sizeof(name), stdin);

    // First character to uppercase
    if (name[0] != '\0')
        name[0] = toupper(name[0]);

    // Remaining characters to lowercase
    for (i = 1; name[i] != '\0'; i++) {
        name[i] = tolower(name[i]);
    }

    // Print formatted name
    printf("%s", name);

    return 0;
}