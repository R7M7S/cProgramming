// Write a C program to print all Prime numbers between 1 to n.
#include <stdio.h>

int main()
{

   int i,j,limit=12,isPrime;
   
   printf("Enter the limit : ");
   scanf("%d",&limit);

   for( int i=2; i<=limit; i++)
   {
    
    isPrime=1;

    for(int j=2; j<=i/2; j++)
    {

        if(i % j == 0){
            isPrime = 0;
            break;
        }
    }

    if(isPrime==1)
    {
        printf("%d\n",i);
    }
    }
    
    return 0;
}