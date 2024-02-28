//2. Write a C program to print multiplication table of any number.
#include <stdio.h>

int main(){

int table =2;

for(int i=1; i<=10;i++)
{
    printf("%d * %d = %d\n",i,table, (table * i));
}

}