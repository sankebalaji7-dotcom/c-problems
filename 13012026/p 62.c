#include <stdio.h>
int main() {
    int n,i,j,sum=0;

    printf("Enter n:");
    scanf("%d",&n);

      for(i=2;i<=n;i++){
         int Prime = 1;
    
          for(j=2;j < i;j++){
            if(i % j==0){
                Prime=0;
                break;
            }
        }
          if (Prime==1){
            sum=sum+i;
        }
    
      }

         printf("%d\n",sum);
    return 0;
}