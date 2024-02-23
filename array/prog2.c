#include <stdio.h>
#include <string.h>

int main(){
    char name[]="ramees";
    
    for(int i=strlen(name)-1; i>=0; i--){

        printf("%c",name[i]);

    }
}