#include <stdio.h>
int main() {
    int n;
    int sum = 0, r;

    printf("enter number:");
    scanf("%d",&n);
    for(;n != 0;n= n / 10)
     r= n % 10;
     sum= sum + r;
     {
        printf("sum of digits: %d ",sum);
     }
    
    return 0;
}