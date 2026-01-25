#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j, flag = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    for (i = 0; i < strlen(str); i++) {
        for (j = i + 1; j < strlen(str); j++) {
            if (str[i] == str[j]) {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
            break;
    }

    if (flag == 1)
        printf("Duplicates found");
    else
        printf("No duplicates");

    return 0;
}