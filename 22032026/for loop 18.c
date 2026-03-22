#include <stdio.h>

int main() {
  int A, B;
   int i, gcd = 1;
  scanf("%d %d", &A, &B);

  int min = (A < B) ? A : B;

 for(i = 1; i <= min; i++){
 if(A % i == 0 && B % i == 0){
     gcd = i;
  }
 }
   printf("%d", gcd);

    return 0;
}