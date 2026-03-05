#include <stdio.h>
int main() {
      int marks;
       int attempt;
       scanf("%d",&attempt);
      scanf("%d",&marks);
      
      switch(attempt){
     case 1:
     if(marks>=80){
        printf("Excellent");
     }
     else{
        printf("Not qulified");
     }
     break;
     case 2:
     if(marks>=60){
        printf("Good");
     }
     else{
        printf("Not Qulified");
     }
     break;
     case 3:
      if(marks<=40){
        printf("Needs Improvement");
      }
      break;
      }
    
    return 0;
}