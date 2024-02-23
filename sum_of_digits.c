#include <stdio.h>

	int main() 
	{
    		int num, digit, sum = 0;
    		// Input
    		printf("Enter a three Digits integer Number : ");
    		scanf("%d", &num);
    		// Calculate the sum of digits
    		digit = num % 10;
    		printf("digit = %d\n",digit);
    		sum += digit;
    		num /= 10;

    		digit= num % 10;
    		sum +=digit;
    		num /=10;

    		digit = num % 10;
    		sum += digit;
		// Output
    		printf("The sum of digits is: %d\n", sum);

    return 0;
}

