#include <stdlib.h>
#include <stdio.h>

#define N 10

int L[N] = {1,2,3,4,5,6,7,8,9,10};

int resp;


// -- escreva seu código abaixo dessa linha --- (e não altere esta linha)


int main() {
    int seq = 0;
    resp = 0;
    
    for (int i = 0; i < N-1; i++) {
        if (L[i] % 2 != 0) {
            seq++;
            
        } else {
            if (seq > resp) {
                resp = seq;
            }

            seq = 0;
        }
    }

    return 0;
}
