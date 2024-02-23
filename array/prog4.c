#include <stdio.h>

int main(){

int numbers[]={1,2,3,4,5};
int search=3;
    for(int i = 0; i <= 4; i++)
    {
        if(numbers[i] == search){
            printf("Matched\n");
            break;
        }
    }
    
    return 0;
}