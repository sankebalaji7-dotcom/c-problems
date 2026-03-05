#include <stdio.h>
int main() {
    int lonetype;
    int score;

    scanf("%d",&lonetype);
    scanf("%d",&score);

    switch(lonetype){
        case 1:
        if(score>=700){
            printf("Aapproved");
        }
        else if(score>=650 && score<=699){
            printf("manual review");
        }
        break;
        case 2:
        if(score>=700){
            printf("Approved");
        }
        else{
            printf("Rejected");
        }
        break;
    }
    
    return 0;
}