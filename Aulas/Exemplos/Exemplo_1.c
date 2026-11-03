// Comentário

/*

    Comentário


    Bibliotecas: Guarda as infotmações
    Funções: Blocos de Código
    Código: Parte que será executada

    int, float, double, char, byte, long, booleanas

    int = inteiro
    float = flutuante (números quebrados)
    double = armazenamento maior
    char = Caractere (ou conjunto de caracteres: String)
    bool = Validação - Verdadeiro ou Falso

*/

#include <stdio.h> //Biblioteca

int main() { //Função MAIN!!!!!!

    //TIPO + NOME OU + VALOR
    int numero = 5; // %d
    float numero_2 = 10.0; // %f
    double numero_3 = 15.0;
    char letra[1] = "a"; // %c
    char nome[10] = "Pedro"; //STRING %s
    bool validacao = true; // %b

    //print(numero) - PYTHON
    printf("Numero: %10.2f | %d", numero_2, numero);

    return 0;

}

