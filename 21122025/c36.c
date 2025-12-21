#include <stdio.h>
int main() {
    int age;
    scanf("%d",&age);
    if(age<=25){
        printf("insurance 2000");
    }
    else if(age<=40){
        printf("insurance 4000");
    }
    else{
        printf("insurance 6000");
    }
    return 0;
}