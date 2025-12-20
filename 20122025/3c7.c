#include <stdio.h>
int main() {
    int N;
    scanf("%d",&N);
    if((N%4==0 && N%100 !=0) || (N%400==0)){
        printf("it is leap year");
    }
    else{
        printf("it is not leap year");
    }
    
    return 0;
}