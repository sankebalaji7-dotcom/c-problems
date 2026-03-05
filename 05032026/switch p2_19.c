#include <stdio.h>
int main() {
    int category;
    int distance;

    scanf("%d",&category);
    scanf("%d",&distance);

    switch(category){
    case 1:
     if(distance<=30){
        printf("Eligible");
     }
     else{
        printf("Eligible with Extra speed");
     }
     break;
     case 2:
     if(distance<=30){
        printf("Eligible");
     }
     else{
        printf("Not Eligible");
     }
     break;
     case 3:
     if(distance<=30){
        printf("Eligible");
     }
     else{
        printf("not eligible");
     }

    }
    
    return 0;
}