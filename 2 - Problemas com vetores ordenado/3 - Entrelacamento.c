// inclua as bibliotecas e definas as variáveis globais de entrada e saída do modelo
#include <stdlib.h>
#include <stdio.h>

#define N 10
int L[N] = {2,3,5,1,4,6,8,0,7,9};
int meio1 = 3;
int meio2 = 7;

// -- escreva seu código abaixo, não altere esta linha

int menor2(int a, int b) {
    return (L[a] < L[b]) ? a : b;
}

int menor3(int a, int b, int c) {
    if (a >= meio1) {
        if (b >= meio2) return c;
        if (c >= N) return b;

        return menor2(b, c);
    }
    if (b >= meio2) {
        if (c >= N) return a;
        if (a >= meio1) return c;

        return menor2(a, c);
    }
    if (c >= N) {
        if (a >= meio1) return b;
        if (b >= meio2) return a;
        
        return menor2(a, b);
    }

    return menor2(menor2(a, b), c);
}

int main() {
    int i=0, j=meio1, k=meio2, curr=0;
    int aux[N];

    while(curr < N) {
        int m = menor3(i, j, k);
        aux[curr++] = L[m];
      
        if (m == i) i++;
        if (m == j) j++;
        if (m == k) k++;
    }

    for (int t = 0; t < N; t++) L[t] = aux[t];
}
