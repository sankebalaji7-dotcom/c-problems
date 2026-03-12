#include <stdio.h>

int main() {
  int N,temp,digit,i,fact,sum = 0;

 scanf("%d", &N);
  temp = N;
  while(temp > 0) {
  digit = temp % 10;
  fact = 1;
  for(i = 1; i <= digit; i++) {
  fact = fact * i;
   }

  sum = sum + fact;
  temp = temp / 10;
    }
  if(sum == N) {
   printf("Yes");
  } else {
    printf("No");
    }

    return 0;
}