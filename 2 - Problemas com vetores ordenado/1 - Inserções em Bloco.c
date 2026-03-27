// inclua as bibliotecas e definas as variáveis globais de entrada e saída do modelo
#include <stdlib.h>
#include <stdio.h>

#define N 10
#define M 5

int L[N] = {3,8,12,15,20,0,0,0,0,0};

int B[M] = {2,11,19,26,32};

// -- escreva seu código abaixo, não altere esta linha



int main() {

    int l = N - M - 1;
    int b = M - 1;
    int i = N - 1;

    while (i >= 0) {
        if (l < 0) {
            L[i] = B[b];
            b--; i--;
            continue;
        }

        if (b < 0) {
            L[i] = L[l];
            l--; i--;
            continue;
        }

        if (L[l] > B[b]) {
            L[i] = L[l];
            l--; i--;

        } else {
            L[i] = B[b];
            b--; i--;
        }
    }

    if (L[0] > B[0]) {
        L[0] = B[0];
    }

}
