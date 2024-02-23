#include <stdio.h>

int main(){

    int limit, start=2;

    printf("Enter the limit : ");
    scanf("%d", &limit);

    while (start < limit)
    {
        printf("%d\n", start);
        start += 2;
    }
    
    return 0;
}