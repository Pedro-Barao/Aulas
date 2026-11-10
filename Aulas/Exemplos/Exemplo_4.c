#include <stdio.h>
//exercicio de for
int main(){
    //recebimento do valor
    float numero = 0;
    printf("insira um numero da sua escolha:");
    scanf("%f",&numero);
    //loop de 1 a 10, tabuada
    for( int i = 0;i <10; i++){

        printf("\n%dx%1.1f=%1.1f\n",i+1,numero,(i+1)*numero);

    }

    return 0;
}