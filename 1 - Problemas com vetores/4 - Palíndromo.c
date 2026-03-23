#include <stdlib.h>
#include <stdio.h>

#define N 10

int L[N] = {1,2,3,4,5,6,7,8,9,10};

int resp;


// -- escreva seu código abaixo dessa linha --- (e não altere esta linha)


int main() {
    resp = 1;
    for (int i = 0; i < N/2; i++) {
        if (L[i] != L[N-1-i]) {
            resp = 0;
        }
    }

    return 0;
}
