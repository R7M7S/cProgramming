#include <stdio.h>

int main()
{

    int numbers[] = {1, 2, 3, 4, 5, 6};
    int len = sizeof(numbers) / sizeof(numbers[0]);
    for (int i = len - 1; i >= 0; i--)
    {

        printf("%d ", numbers[i]);
    }

    printf("\n");

    return 0;
}