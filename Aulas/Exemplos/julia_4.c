#include <stdio.h>

int main(){
    //variaveis representando tres numeros escolhidos pelo cliente
    int n1 = 0;
    int n2 = 0;
    int n3 =0;
    //restricao para nao ter valores iguais
    printf("\nSiga as instrucoes abaixo sem repetir os valores atribuidos.\n");

    //recebimento dos valores das variaveis
    printf("\ninsira um numero inteiro para representar n1:\n");
    scanf("%d",&n1);

    printf("\ninsira um numero inteiro para representar n2:\n");
    scanf("%d",&n2);

    printf("\ninsira um numero para representar n3:\n");
    scanf("%d",&n3);
    //comparacao entre os valores fornecidos pelo cliente
    
    if(n1==n2 || n2==n3 || n1==n3){

        printf("para execucao da validacao, numeros devem ser diferentes\n");

    }
    else if(n1>n2 && n1>n3){

        printf("\nn1 e o maior numero\n");

        //vendo qual o menor
        if(n2<n3){

            printf("\nn2 e o menor numero\n");
        }else {

            printf("\nn3 e o menor numero\n");
        }
    }else if(n2>n1 && n2>n3){


        printf("\nn2 e o maior numero\n");

        //vendo qual o menor
        if(n1<n3){

            printf("\nn1 e o menor numero\n");
        }else {

            printf("\nn3 e o menor numero\n");
        }
    }else if(n3>n1 && n3>n2){

        printf("\nn3 e o maior numero\n");
        //vendo qual o menor
        if(n2<n1){

            printf("\nn2 e o menor numero\n");
        }else {

            printf("\nn1 e o menor numero\n");
        }
    }else {
        //se o cliente repetir os valores
        printf("\nnumeros invalidos\n");

    }

    return 0;
}
