#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    if(a>0){
        printf("it is positive");
    }
    else if(a<0){
        printf("it is negative");
    }
    else{
        printf("eaither 0");
    }
    return 0;
}