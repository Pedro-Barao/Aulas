#include <stdio.h>

int main() {

    int x = 0;

    printf("\nInsira o valor de x: ");
    scanf("%d", &x);

    float ex_1 = (64 - 16 * 4) + (48 * x - 180) * 5;

    printf("\n%f\n", ex_1);

    return 0;

}