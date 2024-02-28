// 4. Write a C program to find first and last digit of a number.
#include <stdio.h>

int main(){

    int num = 86756,lastDigit;
    
    //find first digit of the number  
    int firstDigit = num;   
    while(firstDigit >= 10){
        firstDigit = firstDigit / 10;
    }

    // find last digit 
    lastDigit = num % 10;

    printf( "First Digit : %d\n",firstDigit);
    printf("Last Digit  : %d\n",lastDigit);

    return 0;
}