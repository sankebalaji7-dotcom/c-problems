#include <stdio.h>
int main() {
    int Developer;
    int Experince;
    int salary;
    int bonus;
    scanf("%d",&Developer);
    scanf("%d",&Experince);
    switch(Developer){
    
       case 1:
       if(Experince>=3){
        bonus=5000*Experince;
        salary=50000+bonus;
       }
       else{
        printf("No Experince");
       }
       break;
       default:
       printf("Invalid Experince");
       
    }
    printf("%d\n%d\n",bonus,salary);
    return 0;
}