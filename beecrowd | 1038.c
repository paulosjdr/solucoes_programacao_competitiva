#include <stdio.h> // Incluem as bibliotecas necessárias para funções de entrada/saída e alocação de memória.
#include <stdlib.h> // Incluem as bibliotecas necessárias para funções de entrada/saída e alocação de memória.

int main() { //Declarção da FUNÇÃO principal "main"

    int cod, qtd; // Declaração das VARIÁVEIS inteiras cod e qtd.
    double total; // Declaração da VARIÁVEL de ponto flutuante (double) total.

    // LEITURA dos valores usando scanf.
    scanf("%d %d", &cod, &qtd);

    // Cálculo do total baseado no código.
    switch(cod){
    case 1:
        total = qtd * 4.00; // Valor do CACHORRO QUENTE.
        break;
    case 2:
        total = qtd * 4.50; // Valor do X-SALADA.
        break;
    case 3:
        total = qtd * 5.00; // Valor do X-BACON.
        break;
    case 4:
        total = qtd * 2.00; // Valor da TORRADA SIMPLES.
        break;
    case 5:
        total = qtd * 1.50; // Valor do REFRIGERANTE.
        break;
    }

    // EXIBIÇÃO do total.
    printf("Total: R$ %.2lf\n", total); //IMPRIME o valor total com duas casas decimais.

    return 0; // RETORNA zero para indicar que o programa foi executado com sucesso.
}
