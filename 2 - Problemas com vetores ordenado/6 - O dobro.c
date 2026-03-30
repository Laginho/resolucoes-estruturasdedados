#include <stdlib.h>
#include <stdio.h>

#define N 12

int U[N] = {1,5,6,9,11,12,17,20,26,28,30,33};
int V[N] = {3,4,6,8,13,16,18,23,27,34,42,51};

int resp;


// -- escreva seu código abaixo dessa linha --- (e não altere esta linha)


int main() {

    int i = 0, j = 0;

    while (i < N && j < N) {
        if (V[j] == 2 * U[i]) {
            resp = 1; break;
        } else if (V[j] < 2 * U[i]) j++; 
        else i++;
    }

}
