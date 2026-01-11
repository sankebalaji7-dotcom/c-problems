#include <stdio.h>

int main() {
    int n, t, d, s = 0, f;

    scanf("%d", &n);
    t = n;

    while (t) {
        d = t % 10;
        f = 1;
        for (int i = 1; i <= d; i++)
            f *= i;
        s += f;
        t /= 10;
    }

     if(s == n)
     {
        printf("strong number");
     }
     else{
        printf("not strong number");
     }
    return 0;
}
