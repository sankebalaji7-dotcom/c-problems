#include <stdio.h>
int main() {
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

    if(a+b+c==180){
        printf("it is valid");
    }
    else{
        printf("non valid");
        }
        return 0;
    }