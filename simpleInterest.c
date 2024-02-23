#include <stdio.h>

int main ()
{
 	int p=1000, r=2, t=11, interest;
	printf("Enter the Principle Amount     : ");
	scanf("%d",&p);
	printf("Enter the Rate of Interest     : ");
	scanf("%d",&r);
	printf("Enter the Time period in month : ");
	scanf("%d",&t);
	interest = p*r*t/100;
	printf("\n");

	// interest calculation
	printf("Calculated Interest P/A\n");
	printf("---------------\n");
	printf("Principle Amount is		: %d\n" , p);
	printf("Rate of Interest   		: %d%%\n" , r);
	printf("Total Time Period  		: %d \n", t);
	printf("Total Interest     		: %d \n", interest);
	return 0;
}
