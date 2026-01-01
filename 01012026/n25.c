#include <stdio.h>
int main() {
    int n=121,temp,rev=0;
       temp=n;
    
    while(n>0){
        rev=rev*10+(n%10);
        n=n/10;
    }
       if(rev==n){
        printf("palindrome");
       }
       else{
        printf("not palindrome");
       }
    
    return 0;
}