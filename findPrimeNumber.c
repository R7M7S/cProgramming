#include <stdio.h>

int main(){

int check,find=1;

    printf("Enter the number to check : ");
    scanf("%d",&check);

    for(int i = 2;i < check/2; i++){
        if(check % i == 0){
            find = 0;
        }
    }

    if(find){
        printf("%d Prime Number\n", check);
        
    }else{
        printf("%d is not a Prime Number\n", check);
    }
    return 0;
}