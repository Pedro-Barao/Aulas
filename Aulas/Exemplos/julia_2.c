#include <stdio.h>

int main(){

    // Código do sistema e código que receberá o valor
    int codigo = 1;
    int codigo2 = 1234;// Código do sistemA!!!

    //Pede para o usuário inserir um valor
    printf("\ndigite o codigo de 4 numeros:\n");


    //Recebe o valor para a variável código
    scanf("%d",&codigo);


    /*
    
        se for igual, acesso permitido
        se nao, acesso negado

    */
    if (codigo == codigo2){

        printf("\nacesso permitido\n");


    } else{


        printf("\nacesso negado\n");
    }


    return 0;
}