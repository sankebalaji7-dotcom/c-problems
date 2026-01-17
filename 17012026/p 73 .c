#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    char *word;
    char longest[50] = "";
    fgets(str, sizeof(str), stdin);
    word = strtok(str, " \n");
    while (word != NULL) {
        if (strlen(word) > strlen(longest)) {
            strcpy(longest, word);
        }
        word = strtok(NULL, " \n");
    }
    if (longest[0] != '\0')
        printf("Longest word: %s\n", longest);
    else
        printf("No words found.\n");

    return 0;
}

