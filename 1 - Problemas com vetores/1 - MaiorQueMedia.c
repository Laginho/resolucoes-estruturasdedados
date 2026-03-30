// inclua as bibliotecas e definas as variáveis globais de entrada e saída do modelo
#include <stdlib.h>
#include <stdio.h>

#define N 7

int L[N] = {82, 90, 54, 56, 12, 98, 39};

int maior;

// -- escreva seu código abaixo, não altere esta linha

double media() {
    int soma = 0;
    for (int i = 0; i < N; i++) {
        soma += L[i];
    }
    return (double)soma / N;
}

int main() {
    double m = media();
    for (int i = 0; i < N; i++) {
        if (L[i] < m && L[i] > maior) {
            maior = L[i];
        }
    }

    printf("%d\n", maior);
    return 0;

}
