#include <stdio.h>

int main(){

    int martix[3][3]={{1,2,3},{4,5,6},{7,8,9}};

    for(int i=0;i<3;i++){
        for(int k=0;k<3;k++){
            printf(" %d",martix[i][k]);
        }
        printf("\n");
    }


}