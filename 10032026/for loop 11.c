#include <stdio.h>
int main() {
    int n,sum=0;

    printf("Enter a Number:");
    scanf("%d", &n);

    for(;n > 0;n = n / 10){
       sum+=n%10;
    }
    printf("Sum of digits=%d:",sum);
    
    return 0;
}