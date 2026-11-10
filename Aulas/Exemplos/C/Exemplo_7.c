#include <stdio.h>

int main()
{

    // for | do while | while

    /*
    
        FOR: Um laço de repetição com:

            Começo -> Meio -> Fim

            (Começo; enquanto for; Meio)
                            |
                            V
                    quando chegar ao fim?

            1 até 10

            (Comece com 1; Vá até 10; De um em um)

        

        DO-WHILE (Faça Enquanto):

            "Faça a soma +1 para a variável X, Enquanto X for <= 10"

            ELE EXECUTADO PELO MENOS UMA VEZ


        WHILE (Enquanto):

            "Enquanto X for <= 10, Some +1 para a variável X"

            ELE EXECUTA SÓ SE A CONDIÇÃO FOR VERDADEIRA


    */

    int x_FOR = 0, x_DO_WHILE = 0, x_WHILE = 0; // X tem que contar quantas unidades

    // DE 1 A 100, TODOS OS NÚMEROS PARES DEVEM SER CONTADOS, a condicao é ser divisivel por 2

    /*
    
        2 8 | 2
       -2   | 1 4
        0 8 |
         -8 |
     ***  0 | ***


        4 9 | 2
       -4   | 2 4
        0 9 |
         -8 |
     ***  1 | ***



    */
    // contando todos numeros pares ate 100
    for(int i = 0; i < 100; i++)
    {

        if((i + 1) % 2 == 0) // % = Módulo de i + 1 / 2 = 0(modulo e quando vc divide e pega so o resto)
        {

            x_FOR++;

        }

    }
    
    /*
    
        CRUD

        CREATE
        READ
        ***UPDATE
        DELETE

        "Ontem fui ao marcado"

        "*mercado"

    */

    int i = 0;

    do
    {

        if((i + 1) % 2 == 0)
        {

            x_DO_WHILE++;

        }

        i++;

    } while(i < 100);

    int o = 0;

    while(o < 100)
    {

        if((o + 1) % 2 == 0)
        {

            x_WHILE++;

        }

        o++;

    }

    
//printa quantas vezes teve numeros pares de 1 ate 100
    printf("\n%d\n", x_FOR);
    printf("\n%d\n", x_DO_WHILE);
    printf("\n%d\n", x_WHILE);


    return 0;

}