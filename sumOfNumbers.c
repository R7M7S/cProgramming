#include <stdio.h>

int main(){

    int limit, sum=0;

    printf("Enter the number : ");
    scanf("%d",&limit);

   for(int i = 1; i <= limit; i++)
   {
        sum += i;
   }

   printf("sum of %d is \t : %d\n", limit, sum);
   
   

}