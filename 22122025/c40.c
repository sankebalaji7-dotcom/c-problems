#include <stdio.h>
int main() {
    int balance,withdrawal_amount;
    scanf("%d",&balance);
    scanf("%d",&withdrawal_amount);
    if(balance>=withdrawal_amount+500)
    {
        printf("success");
    }
    else{
        printf("fail");
    }
    return 0;
}