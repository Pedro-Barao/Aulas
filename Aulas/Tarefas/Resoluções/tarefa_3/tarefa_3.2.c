#include <stdio.h>

int main(){

    int frequencia=0;
    float nota=0;
//recebendo os valores
    printf("insira a nota final do aluno:");
    scanf("%f",&nota);

    printf("insira a porcentagem de frequencia de 0 a 100 do aluno:");
    scanf("%d",&frequencia);
//imprimindo o resultado
    if(nota>=7.0 && frequencia>=75){

        printf("aluno aprovado!");

    }else{

        printf("aluno reprovado!");

    }

    return 0;
}