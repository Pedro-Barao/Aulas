#include <stdio.h>

//exercicio de for 
int main(){

    float numero = 0;
    printf("insira um numero de sua escolha:");
    scanf("%f", &numero);

    //tabuada do numero fornecido ate 10
    
    for(int i=0; i<=10; i++){

        printf("\n%dX%3.1f=%3.1f\n",i,numero,i*numero);

    }

    return 0;
}