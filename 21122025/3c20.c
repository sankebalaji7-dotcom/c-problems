#include <stdio.h>
int main() {
    int a,Bonus;
    scanf("%d",&a);
    if(a>=5){
       Bonus=5000;
    } 
    else{
        Bonus=2000;
    }
    printf("%d",Bonus);
    return 0;
}