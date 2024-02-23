#include <stdio.h>

    int main()
    {
        int phy,che,bio,math,com,totalMark,p;

        // input marks
        printf("Enter marks\n");
        printf("Physics : ");
        scanf("%d", &phy);
        printf("Chemestry : ");
        scanf("%d", &che);
        printf("Biology : ");
        scanf("%d",&bio);
        printf("Math : ");
        scanf("%d",&math);
        printf("Computer : ");
        scanf("%d", &com);

        // total mark
        totalMark= phy+che+bio+math+com;

        // calculate percentage
        p = (totalMark *100) / 500;

        if (p >= 90) 
        {
            printf("A Grade\n");

        } else if (p >= 80) 
        {
            printf("B Grade\n");

        } else if (p >= 70)
        {
            printf("C Grade\n");

        }  else if (p >= 60)
        {
            printf("D Grade\n");

        } else if (p >= 40)
        {
            printf("E Grade\n");

        } else {
            printf("F Grade\n");
        }

        return 0;
    }