#include <stdio.h>
 
int main()
{
    int eng=66, phy=87, chem=34, math=75, comp=55; 
    int total, average;

    printf("Enter Marks\n");
    printf("------------\n");
    printf("English       : ");
    scanf("%d",&eng);
    printf("Physics       : ");
    scanf("%d",&phy);
    printf("Chemistry     : ");
    scanf("%d",&chem);
    printf("Math          : ");
    scanf("%d",&math);
    printf("Computer      : ");
    scanf("%d",&comp);
    printf("\n");
    total = eng + phy + chem + math + comp;
    average = total / 5.0;
    printf("Average Marks\n");
    printf("-------------\n");
    printf("Total marks   : %d\n", total);
    printf("Average marks : %d\n", average);
    return 0;
}
