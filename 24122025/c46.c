#include <stdio.h>
#include<string.h>
int main() {
    char pass[50];
    int len;
    scanf("%s",&pass);
     len = strlen(pass);
    if(pass>=8){
        printf("strong");
    }
    else if(pass>=5){
        printf("medium");
    }
    else{
        printf("weak");
    }
    
    return 0;
}