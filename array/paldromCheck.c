#include <stdio.h>
#include <string.h>

int main()
{
    char word[] = "ramees";
    int lenght = strlen(word);
    int flag = 0;

    printf("%d\n", lenght);

    for (int i = 0; i < lenght / 2; i++)
    {
        if (word[i] != word[lenght - 1 - i])
        {
            flag = 1;
            break;
        }
    }

    if (flag)
    {
        printf("%s not a pladrome word\n", word);
    }
    else
    {
        printf("%s is a paldrom word\n", word);
    }
}