#include <stdio.h>

int main(){

    float temperatura=0;
//recebendo a temperatura
    printf("insira a tempertura atual em graus Celsius:\n");
    scanf("%f",&temperatura);
//determinando o clima
    if(temperatura<=15){

        printf("clima frio");

    }else if(temperatura<25){

        printf("clima agradavel");

    }else if (temperatura>=25){

        printf("clima quente");
    }

    return 0;
}