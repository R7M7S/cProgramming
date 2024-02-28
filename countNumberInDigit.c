// Write a C program to count number of digits in a number.
#include <stdio.h>

int main(){

    int num,count;

    printf("Enter the Number   : ");
    scanf("%d",&num);

    while(num != 0){
            num /= 10;
            count++;
    }

     printf("Number of digit is : %d\n",count);

}
