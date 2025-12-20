#include <stdio.h>
int main() {
    int salary,bonus;
    
    scanf("%d",&salary);
    if(salary>=20000)
    {
        bonus=salary+2000;
    }
    else{
        bonus=salary+1000;
    }
    printf("%d",bonus);
    return 0;
}