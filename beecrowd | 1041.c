#include <iostream> // Inclui a biblioteca de entrada e saída em C++.

using namespace std; // Usa o namespace std para evitar a necessidade de escrever std:: antes de funções como cout e cin.

int main() { // Função principal do programa.

    double x, y; // Declaração de duas variáveis do tipo double para armazenar os valores de entrada.

    scanf("%lf %lf", &x, &y); // Lê dois valores do tipo double da entrada padrão (teclado).

    // Verifica a posição dos pontos e imprime a respectiva mensagem.
    if(x == 0 && y == 0){
            printf("Origem\n"); // Se ambos os pontos x e y são igual a zero.
        }else if(x == 0){
            printf("Eixo Y\n"); // Se apenas o ponto x é igual a zero.
        }else if(y == 0){
            printf("Eixo X\n"); // Se apenas o ponto y é igual a zero.
        }else if(x > 0 && y > 0){
            printf("Q1\n");     // Se os pontos x e y são positivos.
        }else if(x < 0 && y > 0){
            printf("Q2\n");     // Se o ponto x é negativo e y positivo.
        }else if(x < 0 && y < 0){
            printf("Q3\n");     // Se os pontos x e y são negativos.
        }else{
            printf("Q4\n");     //Para todos os outros casos (x positivo e y negativo).
        }

    return 0; // Indica que o programa foi executado com sucesso.
}
