#include <stdlib.h>
#include <stdio.h>

#define N 10

int U[N] = {1,2,3,4,5,6,7,8,9,10};
int V[N] = {4,5,6,7,8,9,10,1,2,3};

int resp;


// -- escreva seu código abaixo dessa linha --- (e não altere esta linha)


int main() {

    int i = 0, j = 0;
    while (i < N && j < N) {
        if (V[j] == U[i]) {
            i++; j++;
        } else if (U[i] < V[j]) {
            resp++; i++;
        } else {
            resp++; j++;
        }

        // se os dois últimos forem diferentes,
        // ele terminaria sem contar o segundo deles
        if (i == N-1 && j == N-1 && U[i] != V[j]) resp++;
    }

}
