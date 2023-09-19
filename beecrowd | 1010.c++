#include <iostream>

using namespace std;

int main()
{
    int cod1, cod2, qtd1, qtd2;
    double vlr1, vlr2, total;

    cin >> cod1 >> qtd1 >> vlr1;
    cin >> cod2 >> qtd2 >> vlr2;

    total = (qtd1*vlr1) + (qtd2*vlr2);

    cout << "VALOR A PAGAR: R$" << total <<endl;

    return 0;
}
