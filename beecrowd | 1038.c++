#include <iostream> // Inclui a biblioteca de entrada/saída para entrada e saída de dados padrão.
#include <iomanip> // Inclui a biblioteca para manipulação de formatação de saída.

using namespace std; // Usa o namespace padrão, onde estão definidas as funcionalidades padrão de C++.

int main() { //Declarção da FUNÇÃO principal "main"

    int cod, qtd; // Declaração das VARIÁVEIS inteiras cod e qtd.
    double total; // Declaração da VARIÁVEL de ponto flutuante (double) total.

    // LEITURA dos valores usando scanf.
    cin >> cod >> qtd;

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
    cout << "Total: R$ " << setprecision(2) << fixed << total <<endl; //IMPRIME o valor total com duas casas decimais com espaçamento de linha (endl).

    return 0; // RETORNA zero para indicar que o programa foi executado com sucesso.
}
