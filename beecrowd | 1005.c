#include <stdio.h> // Incluem as bibliotecas necessárias para funções de entrada/saída e alocação de memória.
#include <stdlib.h> // Incluem as bibliotecas necessárias para funções de entrada/saída e alocação de memória.

int main() // É a função principal que indica o ponto de início da execução do programa.
{
    // Declaração das variáveis notaA, notaB e media do tipo double
    double notaA, notaB, media;

    // Definição dos pesos para cada nota
    double pesoA = 3.5, pesoB = 7.5;

    // Leitura das notas digitadas pelo usuário
    scanf("%lf %lf", notaA, notaB);

    // Cálculo da média ponderada
    media = (notaA * pesoA + notaB * pesoB) / (pesoA + pesoB);

    // Impressão da média com duas casas decimais
    printf("MEDIA = %.2lf\n", media);

    // Indica que a execução do programa foi bem-sucedida
    return 0;
}
