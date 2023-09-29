#include <stdio.h>

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
    printf("%d\n", maior);
    printf("%d\n", pos);

    return 0;
}
