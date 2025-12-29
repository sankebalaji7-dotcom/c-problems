#include <stdio.h>
int main() {
    int marks;
    scanf("%d",&marks);
    if(marks>=84 && marks<=95){
        printf("GRADE A");
    }
    else if(marks>=44 && marks<=50)
    {
        printf("GRADE C");
    }
    
    return 0;
}