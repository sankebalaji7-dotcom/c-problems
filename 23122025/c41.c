#include <stdio.h>
int main() {
    int a,bonus;
    scanf("%d",&a);
    if(a==5){
        bonus=5000;
    }
    else if(a==4){
        bonus=3000;
    }
    else if(a==3)
    {
        bonus=1000;
    }
    else{
        bonus=0;
    }
    printf("%d",bonus);
    
    
    return 0;
}