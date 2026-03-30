#include <stdlib.h>
#include <stdio.h>

#define N 10

int L[N] = {10,9,8,7,6,5,4,3,2,1};

int k = 6;

// -- escreva seu código abaixo dessa linha --- (e não altere esta linha)


int main() {

    int temp;

    // por acaso, um vetor ordenado também resolve o problema
    // então basta um bubble sort
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N - 1; j++) {
            if (L[j] > L[j + 1]) {
                temp = L[j];
                L[j] = L[j + 1];
                L[j + 1] = temp;
            }
        }
    }
}
