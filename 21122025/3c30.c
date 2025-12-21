#include <stdio.h>
int main() {
    int salary,tax;
    scanf("%d",&salary);
    if(salary>=50000){
        tax=salary-(salary*10/100);
    }
    else{
        printf("n0 tax");
    }
    
        printf("%d",tax);
    
    
    return 0;
}