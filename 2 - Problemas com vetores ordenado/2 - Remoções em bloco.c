// inclua as bibliotecas e definas as variáveis globais de entrada e saída do modelo
#include <stdlib.h>
#include <stdio.h>

#define N 10
#define M 5

int L[N] = {2,3,5,8,12,15,19,20,32,35};

int B[M] = {2,8,19,20,32};

// -- escreva seu código abaixo, não altere esta linha



int main() {

    int i = 0, j = 0, k = 0;
    int count = 0;

    while (i < M && j < N) {
        if (B[i] == L[j]) {
            for (k = j; k < N - 1; k++) {
                L[k] = L[k + 1];
                L[k + 1] = 0;
            }
            count++;
            i++;
        } else if (B[i] > L[j]) {
            j++;
        } else {
            i++;
        }
    }

}