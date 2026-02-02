#include <stdio.h>

char calculateGrade(int marks) {
    if (marks >= 90)
        return 'A';
    else if (marks >= 80)
        return 'B';
    else if (marks >= 60)
        return 'C';
    else if (marks >= 40)
        return 'D';
    else
        return 'F';   // Fail
}

int main() {
    int marks;
    scanf("%d", &marks);

    if (marks < 40)
        printf("Fail");
    else
        printf("%c", calculateGrade(marks));

    return 0;
}