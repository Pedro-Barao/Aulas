#include <stdio.h>

int main(){

    float numero = 0;

    do{
     printf("insira um valor de 0 a 10:");
        scanf("%f",&numero);

        //digitar infinitamente se for entre 0 e 10 se nao, digitar erro
        
    
    
    }while(numero>=0 && numero<=10);

    printf("deu erro");

    return 0;
}