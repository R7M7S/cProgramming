#include <stdio.h>

int main()
{
    int a = 0, b = 1, c = 0;
    int n;
    printf("Enter the Limit");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("%d", c);
        a = b;
        b = c;
        c = a + b;
    }

    return 0;
}