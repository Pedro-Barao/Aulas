#include <stdio.h>

int main(){


    int quantidade;
    float preco_unitario;
    //recebendo o valor
    printf("digite o preco unitario do produto desejado:");
    scanf("%f",&preco_unitario);

    printf("digite a quantidade do produto que deseja comprar(minimo 1):");
    scanf("%d",&quantidade);
    //calculo do preco com desconto
    float valor_final=preco_unitario*quantidade-15.0;

    if(valor_final<=0){

        printf("esta compra e de graca");

    }else{


        printf("o valor final de sua compra sera:%f",valor_final);


    }

    return 0;
}