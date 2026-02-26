#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;

    
    scanf(" %c", &ch);

    if (isalpha(ch)) {
        char lower = tolower(ch);

        if (lower == 'a' || lower == 'e' || lower == 'i' || 
            lower == 'o' || lower == 'u') {
            printf("Vowel\n");
        } else {
            printf("Consonant\n");
        }
    } else {
        printf(" Not an alphabet\n");
    }

    return 0;
}