#include <stdio.h>

int main(){

    /*
    
        Variável para os lados:

        -Se for 3: Triângulo
        -Se for 4: Quadrado
        -Se for 5: Pentagono

        Variável para Média (em cm):

        -Calcular a área do polígono
    */
    //variaveis essenciais para o funcionamento desse codigo
    int lados = 1;
    float media_dos_lados = 2.0;
    float area = 0.0;
    //rebebimento de dados
    printf("\ninforme a quantidade de lados:");

    scanf("%d",&lados);

    printf("\ninforme a medida dos lados em cm:");

    scanf("%f",&media_dos_lados);
    /*
        se receber 3 fala que e um triangulo e calcula sua area

        se receber 4 fala que e um quadrado e calcula sua area

        se receber 5 fala que e um pentagono e calcula sua area
    
        se nao receber 3,4 ou 5 fala que nao tem no sistema
    
    */
    if(lados==3){

        printf("\nTriangulo\n");
        
        area = media_dos_lados*media_dos_lados/2;

        printf("\nArea=%fcm^2\n",area);

    } else if(lados==4){

        printf("\nQuadrado\n");

        area = media_dos_lados*media_dos_lados;

        printf("\nArea=%fcm^2\n",area);

    } else if(lados==5){

        printf("\nPentagono\n");

        area = (media_dos_lados*5*(media_dos_lados/1.453))/2;

        printf("\nArea=%fcm^2\n",area);

    } else {

        printf("\npoligono nao disponivel no sistema\n");

    }


    return 0;
}