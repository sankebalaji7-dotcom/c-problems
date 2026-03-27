#include <stdio.h>

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num > 0) {
  printf("The number is Positive.\n");

    if (num % 2 == 0) {
    printf("It is also Even.\n");
        }
         else {
            printf("It is also Odd.\n");
        }

    } 
    else if (num < 0) {
        printf("The number is Negative.\n");

        if (num % 2 == 0) {
            printf("It is also Even.\n");
        } 
        else {
            printf("It is also Odd.\n");
        }

    } 
    else {
        printf("The number is Zero.\n");
    }

    return 0;
}