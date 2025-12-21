#include <stdio.h>
int main() {
    int salary,Increment;
    scanf("%d",&salary);
    if(salary>=30000){
        Increment=salary+(salary*10/100);
    }
    else{
        Increment=salary+(salary*15/100);
    }
     printf("%d",Increment);
    return 0;
}