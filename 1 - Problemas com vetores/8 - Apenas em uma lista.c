#include <stdlib.h>
#include <stdio.h>

#define N 10

int U[N] = {1,2,3,4,5,6,7,8,9,10};
int V[N] = {4,5,6,7,8,9,10,1,2,3};

int resp;


// -- escreva seu código abaixo dessa linha --- (e não altere esta linha)


int main() {
    resp = 0;

    for (int i = 0; i < N; i++) {
        int rep = 0;
        for (int j = 0; j < N; j++) {
            if (U[i] == V[j]) {
                rep = 1;
                break;
            }
        }
        if (!rep) resp++;

        rep = 0;
        for (int j = 0; j < N; j++) {
            if (V[i] == U[j]) {
                rep = 1;
                break;
            }
        }
        if (!rep) resp++;
        
        
    }

    return 0;

}
