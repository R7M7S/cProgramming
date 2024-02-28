#include <stdio.h>

int main()
{

    int arr[] = {5, 4, 10, 1, 6, 2};
    int len = sizeof(arr) / sizeof(arr[0]);

    for (int i = 1; i < len; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }

    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}