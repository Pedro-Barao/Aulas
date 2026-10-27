#include <stdio.h>

int main(){

    int variavel = 1;
    int variavel2 = 3;

    int x = 10, y = 3, z = 200;
    bool validacao;

    //Variavel = 0 OU > 0

    /*

        OU: || (Adição)
        E: && (Exclusão)
        NÃO: !

        = : Recebe
        == : Igual a
        != : Diferente de
        >= : Maior igual a
        <= : Menor igual a


    */

    if((variavel2 + variavel) > 1 && (320 - 46 * 2) > 250 && (x * y) != 31 || 420 < (z * y))
    {

        validacao = true;

    }

    else
    { 

        validacao = false;

    }

    if(validacao == true)
    {

        printf("\ntrue\n");

    }

    else{
        printf("\nfalse\n");
    }



    return 0;
}
