#include <stdio.h>

int main()
{

    int numbers[] = {1, 55, 98, 73, 89, 9};
    int search = 98;
    int len = sizeof(numbers) / sizeof(numbers[0]);
    for (int i = 0; i < len; i++)
    {
        if (search == numbers[i])
        {
            printf("item found in %d position\n", i + 1);
            break;
        }
    }

    return 0;
}