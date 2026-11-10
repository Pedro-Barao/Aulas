#include <stdio.h>
//calcular a soma de 1 ate N
int main(){

    float numero = 0;
    printf("insira um numero para somar 1 ate esse numero escolhido:\n");
    scanf("%f",&numero);

    for(float i = 0; i<numero;i++){

        

        float soma = i+1;
            
        printf("%1.1f\n",soma);

    }


    return 0;
}