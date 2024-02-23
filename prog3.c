#include <stdio.h>

int main() {
    int unit = 160;
    int total = 0;

    if (unit <= 50) {
        int charge = unit * 0.5;
        total = charge + charge * 20 / 100;
        printf("50 * 0.5  %d\n", charge);
    }

    if (unit > 50 && unit <= 150) {
        int charge_50 = 50 * 0.5;
        int charge_100 = (unit - 50) * 0.75;
        total = charge_50 + charge_100 + 25 + (charge_50 + charge_100 + 25) * 20 / 100;
        printf("50 * 0.5       %d\n", charge_50);
        printf("100 * 0.75     %d\n", charge_100);
    }

    if (unit > 150 && unit <= 250) {
        int charge_50 = 50 * 0.5;
        int charge_100 = 100 * 0.75;
        int charge_extra = (unit - 150) * 1.20;
        total = charge_50 + charge_100 + charge_extra + 25 + (charge_50 + charge_100 + charge_extra + 25) * 20 / 100;
        printf("50 * 0.5       : %d\n", charge_50);
        printf("100 * 0.75     : %d\n", charge_100);
        printf("extra 100 unit : %d\n", charge_extra);
    }

    if (unit > 250){
        int charge_above_250 = unit * 1.5;
        total = charge_above_250 + charge_above_250 * 20 / 100;
        printf("%d * 1.5 = %d\n", unit, charge_above_250);
    }

    printf("total bill      %d\n", total);

    return 0;
}
