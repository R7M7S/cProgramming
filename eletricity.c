#include <stdio.h>

int main()
{
    int units;
    float charges,total,surcharge;

    printf("Please enter the Unit Consumed : ");
    scanf(" %d",&units);

    if(units <= 50){
        charges = units * 0.5;
    }else {
        charges = 50 * 0.5;
    }

    total = charges;
    printf("\n 0.5 \t\t : %f",total);

    if(units > 50){

        if(units >= 150)
        {
            charges = 100 * 0.75 ;
        }
        else 
        {
            charges = (units - 50) * 0.75;
        }

    total += charges;
    printf("\n 0.75 \t\t : %f",total);
        
    }
// for next 100 unit Rs 1.50 /unit
    if(units > 150){
        if(units >= 250){
            charges = 100 * 1.50;
        } else {
            charges = (units - 150) * 1.50;
        }

        total += charges;
        printf("\n 1.25 \t\t : %f", total);
        
    }

    // An addition surcharge if units exceed 250 
    if(units > 250){
        surcharge = total * 20 / 100;
        total =  total + surcharge;
        printf("\n surcharge \t : %f", surcharge);
    }

    printf("\n-----------------");
    printf("\nTotal \t\t : %f\n",total);
    
    return 0;
}