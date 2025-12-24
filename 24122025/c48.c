#include <stdio.h>
int main() {
    int marks,income;
    scanf("%d",&marks);
    scanf("%d",&income);
    if(marks>=85){
       if(income<=2000000){
        printf("eligble");
    }else
    {
        printf("not eligble");}
    }else{
        printf("age is less");
    }
    return 0;
}