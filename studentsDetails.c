#include <stdio.h>

int main()
{
    char names[3][10];
    int regNo[3];
    int marks[3][3];
    int totals[3];

    for (int i = 0; i < 3; i++)
    {
        printf("\n Enter name : ");
        scanf("%s", names[i]);
        printf("\n Enter Register No : ");
        scanf("%d", &regNo[i]);
        printf("\n Enter Marks :");
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &marks[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            totals[i] += marks[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        printf("---------------------\n");
        printf("Name\t: %s\n", names[i]);
        printf("Reg No\t: %d\n", regNo[i]);
        printf("Marks\t: %d, %d, %d\n", marks[i][0], marks[i][1], marks[i][2]);
        printf("Total\t: %d\n", totals[i]);
        printf("---------------------\n");
    }
    return 0;
}
