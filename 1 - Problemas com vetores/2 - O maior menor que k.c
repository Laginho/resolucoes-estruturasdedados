#include <stdlib.h>
#include <stdio.h>

#define N 10

int L[N] = {1,2,3,4,5,6,7,8,9,10};

int k = 6;

int mmk;

// -- escreva seu código abaixo dessa linha --- ( e não altere esta linha)


int main() {
    mmk = -1;

    for (int i = 0; i < N; i++) {
        if (L[i] < k && L[i] > mmk) {
            mmk = L[i];
        }
    }
    
    return 0;
}
