#include <iostream>

using namespace std;

int main(){

    int a, b, c;

    // Lê três números inteiros
    cin >> a >> b >> c;

    // Verifica qual é o menor número entre a, b e c
    if (a <= b && a <= c) {
        cout << a << "\n";
        // Imprime os outros dois números em ordem crescente
        if (b <= c)
            cout << b << "\n" << c << "\n";
        else
            cout << c << "\n" << b << "\n";
    }

    // Repete a lógica para b e c, trocando a ordem dos if
    if (b <= a && b <= c) {
        cout << b << "\n";
        if (a <= c)
            cout << a << "\n" << c << "\n";
        else
            cout << c << "\n" << a << "\n";
    }

    if (c <= a && c <= b) {
        cout << c << "\n";
        if (a <= b)
            cout << a << "\n" << b << "\n";
        else
            cout << b << "\n" << a << "\n";
    }

    // Imprime novamente os números na ordem em que foram lidos
    cout << "\n" << a << "\n" << b << "\n" << c << "\n";

    return 0;
}
