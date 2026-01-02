#include <stdio.h>
#include <string.h>
int main() {
    int n,i;
    char s[50];
    scanf("%s",s);

     n=s[0] -'0';

    for(i=1;i < n;i++){
        printf("%c",s[i]);
    }
    for(i=n;s[i]!='\0';i++){
       printf("%c",s[i]);
    }
        return 0;
}