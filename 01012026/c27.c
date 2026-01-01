#include <stdio.h>
int main() {
    int i,n,flam=0;

    scanf("%d",&n);
     if(n<=1){
     printf("not prime");
     return 0;
     }
     for(i=2;i<=n/2;i++){
        if(n%i==0){
        flam=1;
         break;
        }
     }
        if(flam==0)
        {
            printf("prime");
        }
        else{
            printf("not prime");
            
        }
         return 0;
}