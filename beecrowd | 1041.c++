#include <iostream> // Inclui a biblioteca de entrada e saída em C++.

using namespace std; // Usa o namespace std para evitar a necessidade de escrever std:: antes de funções como cout e cin.

int main() { // Função principal do programa.

    double x, y; // Declaração de duas variáveis do tipo double para armazenar os valores de entrada.

    cin >> x >> y; // Lê dois valores do tipo double da entrada padrão (teclado).

    // Verifica a posição dos pontos e imprime a respectiva mensagem.
    if(x == 0 && y == 0){
            cout << "Origem" << endl; // Se ambos os pontos x e y são igual a zero e caracter de escape (endl).
        }else if(x == 0){
            cout << "Eixo Y" << endl; // Se apenas o ponto x é igual a zero e caracter de escape (endl).
        }else if(y == 0){
            cout << "Eixo X" << endl; // Se apenas o ponto y é igual a zero e caracter de escape (endl).
        }else if(x > 0 && y > 0){
            cout << "Q1" << endl;     // Se os pontos x e y são positivos e caracter de escape (endl).
        }else if(x < 0 && y > 0){
            cout << "Q2" << endl;     // Se o ponto x é negativo e y positivo e caracter de escape (endl).
        }else if(x < 0 && y < 0){
            cout << "Q3" << endl;     // Se os pontos x e y são negativose e caracter de escape (endl).
        }else{
            cout << "Q4" << endl;     //Para todos os outros casos (x positivo e y negativo) e caracter de escape (endl).
        }

    return 0; // Indica que o programa foi executado com sucesso.
}
