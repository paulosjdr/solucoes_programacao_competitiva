#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;

    // Lê três números inteiros
    scanf("%d %d %d", &a, &b, &c);

    // Verifica qual é o menor número entre a, b e c
    if (a <= b && a <= c) {
        printf("%d\n", a);
        // Imprime os outros dois números em ordem crescente
        if (b <= c)
            printf("%d\n%d\n", b, c);
        else
            printf("%d\n%d\n", c, b);
    }

    // Repete a lógica para b e c, trocando a ordem dos if
    if (b <= a && b <= c) {
        printf("%d\n", b);
        if (a <= c)
            printf("%d\n%d\n", a, c);
        else
            printf("%d\n%d\n", c, a);
    }

    if (c <= a && c <= b) {
        printf("%d\n", c);
        if (a <= b)
            printf("%d\n%d\n", a, b);
        else
            printf("%d\n%d\n", b, a);
    }

    // Imprime novamente os números na ordem em que foram lidos
    printf("\n%d\n%d\n%d\n", a, b, c);

    return 0;
}
