#include <stdio.h>
int main() {
    int num,count=0;

    scanf("%d", &num);

    for(;num !=0;num=num/10){
        count++;
    }
    printf("Enter the Numbers=%d",count);
    
    return 0;
}