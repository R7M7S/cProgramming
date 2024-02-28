// 12. Write a program to check the repeating elements in C.

#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 2, 3};

    int len = sizeof(arr) / sizeof(arr[0]);

    printf("Repeating element of Arrays :");

    for (int i = 0; i < len; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            if (arr[i] == arr[j])
            {
                printf("\t%d", arr[i]);
            }
        }
    }

    printf("\n");

    return 0;
}