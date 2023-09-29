#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N, maior, pos=1;

    scanf("%d", &maior);

    for(int i=2; i<=100; i++){
        scanf("%d", &N);
        if(N>maior){
            maior = N;
            pos = i;
        }
    }
    printf("\n %d", maior);
    printf("\n %d", pos);

    return 0;
}
