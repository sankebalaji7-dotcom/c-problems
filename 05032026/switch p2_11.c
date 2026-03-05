#include <stdio.h>
int main() {
  int plantype;
  float datausage;

  scanf("%d",&plantype);
  scanf("%f",&datausage);

  switch(plantype){
    case 1:
    if(datausage<=1){
      printf("Normal speed");
    }
    else{
        printf("speed redused");
    }
    break;
    case 2:
    if(datausage<=2){
        printf("Normal speed");
    }
    else{
        printf("speed reduce");
    }
     break;
     default:
     printf("Extra charges applied");
  }
    
    return 0;
}