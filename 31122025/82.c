#include <stdio.h>
int main() {
    int n;
    int count=0;

    printf("enter number:");
    scanf("%d",&n);
    if(n==0){
        count=1;
    }else{
        if(n < 0) n = -n;
       for(; n !=0;n = n/10){
       count++;
    }
    }
    printf("enter number:%d",count);
    return 0;
}