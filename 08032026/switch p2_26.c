#include <stdio.h>

int main() {
 int delayDays;
 int fine = 0;

   printf("Enter delayed days: ");
    scanf("%d", &delayDays);

  switch (delayDays <= 5 ? 1 : delayDays <= 10 ? 2 : 3) {
  case 1:
     fine = delayDays * 50;
  break;

  case 2:
   fine = delayDays * 100;
  break;

  case 3:
    fine = delayDays * 200;
  break;
    }

    printf("Fine %d\n", fine);

    return 0;
}