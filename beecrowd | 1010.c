#include <stdio.h> // Incluem as bibliotecas necessárias para funções de entrada/saída e alocação de memória.
#include <stdlib.h> // Incluem as bibliotecas necessárias para funções de entrada/saída e alocação de memória.

int main() {  // Declaração da função principal "main" que retorna um inteiro (int).

    int cod1, cod2, qtd1, qtd2;  // Declaração das variáveis inteiras cod1, cod2, qtd1 e qtd2.
    double vlr1, vlr2, total;     // Declaração das variáveis de ponto flutuante (double) vlr1, vlr2 e total.

    scanf("%d %d %lf", &cod1, &qtd1, &vlr1);  // Lê três valores inteiros e de ponto flutuante da entrada padrão e os armazena nas variáveis cod1, qtd1 e vlr1.
    scanf("%d %d %lf", &cod2, &qtd2, &vlr2);  // Lê mais três valores inteiros e de ponto flutuante da entrada padrão e os armazena nas variáveis cod2, qtd2 e vlr2.

    total = (qtd1 * vlr1) + (qtd2 * vlr2);  // Calcula o total somando o produto da quantidade pelo valor para cada item.

    printf("VALOR A PAGAR: R$ %.2lf\n", total);  // Imprime o valor total formatado como moeda brasileira (R$) com duas casas decimais.

    return 0;  // Retorna zero para indicar que o programa foi executado com sucesso.
}
