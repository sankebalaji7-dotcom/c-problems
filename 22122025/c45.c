#include <stdio.h>
int main() {
    int hours,overtime;
    scanf("%d",&hours);
    if(hours>=40){
        overtime=(hours-40)*200;
    }
    printf("%d",overtime);
    return 0;
}