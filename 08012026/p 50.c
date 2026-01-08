#include <stdio.h>
int main() {
    char str[100];
    int i,count=0;

    printf("Enter the string name: ");
    scanf("%s",str);
    for(i=0;str[i] !=0;i++){
        if(str[i]== 'A' || str[i]== 'E' || str[i]== 'I' || str[i]== 'o' || str[i]== 'U' || str[i]== 'a' || str[i]== 'e' || str[i]== 'i' || str[i]== 'o'|| str[i]== 'u'){
            count++;
        }
    }  
    printf("count vowles:%d",count);  
    return 0;
}