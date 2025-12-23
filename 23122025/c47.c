#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    
    if(a<= 1){
        printf("high speed");
    }
    else if(a<= 2){
        printf("mediam speed");
    }
    else{
        printf("loe speed");
    }
    
    return 0;
}