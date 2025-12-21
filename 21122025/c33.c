#include <stdio.h>
int main() {
    int units,bill;
    scanf("%d",&units);
    if(units<=100){
        bill=100*1;
    }
    else{
        bill=(100*1)+(units-100)*2; 
    }
     printf("%d",bill);
    return 0;
}