#include <stdio.h>
int main() {
    int i,base,exponent;
    int result=1;

    printf("Enter base and exponent:");
    scanf("%d %d",&base,&exponent);

    for(i=1;i<=exponent;i++){
        result=result * base;

    }
    printf("%d",result);
    return 0;
}