#include <stdio.h>
int main() {
    int salary,credit_score;
    scanf("%d",&salary);
    scanf("%d",&credit_score);
    if(salary>=25000 && credit_score>=700){
        printf("Eligible");
    }
    else{
        printf("nor eligible");
    }
    return 0;
}