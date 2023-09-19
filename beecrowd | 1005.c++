#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    double notaA, notaB, media;
    double pesoA = 3.5, pesoB = 7.5;

    cin >> notaA >> notaB;

    media = (notaA * pesoA + notaB * pesoB) / (pesoA + pesoB);

    cout << "MEDIA = " << setprecision(5) << fixed << media << endl;

    return 0;
}
