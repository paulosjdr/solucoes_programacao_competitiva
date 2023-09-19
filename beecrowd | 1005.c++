#include <iostream>  // Inclui a biblioteca de entrada/saída para entrada e saída de dados padrão.
#include <iomanip>   // Inclui a biblioteca para manipulação de formatação de saída.

using namespace std;

int main() {
    // Declaração de variáveis
    double notaA, notaB, media;
    double pesoA = 3.5, pesoB = 7.5;

    // Entrada de dados: leitura das notas A e B
    cin >> notaA >> notaB;

    // Cálculo da média ponderada
    media = (notaA * pesoA + notaB * pesoB) / (pesoA + pesoB);

    // Configura a saída para ter 5 casas decimais e imprime a média
    cout << "MEDIA = " << setprecision(5) << fixed << media << endl;

    // Retorna 0 para indicar que o programa foi executado com sucesso
    return 0;
}
