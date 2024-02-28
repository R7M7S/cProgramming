#include <stdio.h>

int main()
{
    int a[] = {7, 4, 10, 8, 3, 1};
    int len = sizeof(a) / sizeof(a[0]);
    // printf("%d", len);
    for (int i = 0; i < len - 1; i++)
    {
        int min = i;

        for (int j = i + 1; j < len; j++)
        {
            if (a[j] < a[min])
            {
                min = j;
            }
        }

        if (min != i)
        {
            int temp = a[i];
            a[i] = a[min];
            a[min] = temp;
        }
    }

    for (int i = 0; i < len - 1; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}