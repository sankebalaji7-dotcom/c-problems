#include <stdio.h>
int main() {
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    if(a%2==0 && b%3==0){
        printf("yes");
    }
    else{
        printf("no");
    }
    return 0;
}