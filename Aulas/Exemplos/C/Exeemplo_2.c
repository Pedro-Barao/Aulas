#include <stdio.h>
#include <math.h>

int main(){

    int x = 0, y = 0, z = 0;

    printf("Coloque o valor de x: ");
    scanf("%d", &x);

    printf("Coloque o valor de y: ");
    scanf("%d", &y);

    printf("Coloque o valor de z: ");
    scanf("%d", &z);

    double ex_1 = pow(57, z * 3);
    double ex_2 = -72 / y + 3 * ex_1 - 47;
    double ex_3 = pow(x, 2) * 32 - sqrt(297) * (ex_2) * 12;

    printf("\n%.2f\n", ex_3);

    return 0;

}