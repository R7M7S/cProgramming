#include <stdio.h>

int main()
{

    int num1,num2;

    printf("Enter two number\n");
    scanf("%d %d",&num1,&num2);


    if(num1>num2){
        printf("greatest number is : %d\n",num1);
    }else{
        printf("greatest number is : %d\n",num2);
    }


}