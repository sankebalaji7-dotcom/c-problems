#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    if(n>= 'A' && n<= 'Z'){
        printf("it is alphabetes");
    }
    else if(n>=1 && n<=9){
        printf("it is digit");
    }
    else{
        printf("specil char");
    }
    
    return 0;
}