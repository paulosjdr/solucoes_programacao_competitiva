#include <bits/stdc++.h>

using namespace std;

int contador = 0;

int fibonacci(int N){
    contador++;
    if(N == 0) return 0;
    if(N == 1) return 1;

    return fibonacci(N-1) + fibonacci(N-2);

}


int main()
{

    cout << fibonacci();

    return 0;
}
