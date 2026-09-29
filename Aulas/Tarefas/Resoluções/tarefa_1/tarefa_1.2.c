#include <stdio.h>

int main(){

    int idade = 0;

    printf("digite sua idade:");

    scanf("%d", &idade);

    if(idade > 25){

        printf("Voce esta liberado e voce tem direito a sala vip");


    } else if (idade >= 18) {

        printf("esta liberado!");

    } else if (idade < 18 || idade >= 16) {


        printf("voce precisa da autorizacao dos pais");

    }
    else {

        printf("voce nao pode entrar");

    }


    /*
        Maior que 25: Sala vip
        Maior ou igual a 18: Entra
        Menor de 18 e maior OU igual a 16: Autorizacao dos pais
        Menor que 16: Nao entra

    */





    return 0;

}