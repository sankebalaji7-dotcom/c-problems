#include <stdio.h>
int main() {
    int a,b,c;

    printf("Enter the number:");
    scanf("%d %d %d",&a,&b,&c);

    if(a>=b && a>=c){

        printf("%d is larger\n",a);
    }
    else if(b>=a && b>=c){
        printf("%d is larger\n",b);
    }
    else{
        printf("%d is larger\n",c);
    }
    
    return 0;
}