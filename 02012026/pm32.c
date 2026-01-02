#include <stdio.h>
#include <string.h>
int main() {
    int i,n;
    int sum=0;
    char s[50];

    scanf("%s",s);

    n=s[0] - '0';

    for(i=1;i <=n;i++){
        sum= sum + (s[i] - '0');
    }
    printf("%d",sum);
    
    return 0;
}