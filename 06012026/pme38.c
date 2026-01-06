#include <stdio.h>

int main()
{
    int i, n = 5, arr[5];

    printf("Enter 5 numbers:\n");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Reverse order:\n");
    for(i = n - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}