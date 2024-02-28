#include <stdio.h>

int main()
{

    int a = 10;
    int b = 20;
    int temp = 0;

    printf("before swap : a = %d b = %d\n", a, b);

    temp = a;
    a = b;
    b = temp;

    printf("after swap  : a = %d b = %d\n", a, b);

    return 0;
}