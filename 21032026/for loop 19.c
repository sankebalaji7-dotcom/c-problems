#include <stdio.h>

int main() {
  int A, B, i, lcm;

 scanf("%d %d", &A, &B);
  
   int max = (A > B) ? A : B;
  for(i = max; ; i++) {
  if(i % A == 0 && i % B == 0) {
   lcm = i;
   break;
  }
  }
   printf("%d", lcm);

    return 0;
}