#include <stdio.h>
int main() {
    int category;
    int age;
    int price;
    scanf("%d",&category);
    scanf("%d",&age);
    switch(category){
        case 1:
        if(age<=5){
            price=1500;
        }
        else if(age>=5){
            price=2500;
        }
        break;
        case 2:
        if(age<=5){
            price=4000;
        }
        else{
            price=6000;
        }
    }
    printf("%d",price);
    return 0;
}