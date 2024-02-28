#include <stdio.h>

int main()
{

    int num = 153, sum;
    int copy = num;

    while (num > 0)
    {
        int rem = num % 10;

        sum = sum + rem * rem * rem;

        num = num / 10;
    }

    if (copy == sum)
    {
        printf("%d is a Armstong number\n", copy);
    }
    else
    {
        printf("%d is not a Armstrong number\n", copy);
    }

    return 0;
}