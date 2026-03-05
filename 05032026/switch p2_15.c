#include <stdio.h>

int main() {
    int mode;
    char category;

    scanf("%d %c", &mode, &category);

    switch(mode) {
        case 1: 
            switch(category) {
                case 'R': 
                printf("5000"); 
                break;
                case 'S': 
                printf("3000"); 
                break;
                default: 
                printf("Invalid category");
            }
            break;

        case 2:  
            switch(category) {
                case 'R': 
                printf("9000"); 
                break;
                case 'S': 
                printf("7000");
                 break;
                default: 
                printf("Invalid category");
            }
            break;

        default:
            printf("Invalid mode");
    }

    return 0;
}