#include <stdlib.h>
#include <stdio.h>

#define N 10

int L[N] = {1,2,3,4,5,6,7,8,9,10};

// -- escreva seu código abaixo dessa linha --- (e não altere esta linha)

int main() {
	for (int i = 1; i < N; i += 2) {
		int n0 = N / 2 + (i / 2);
		int temp = L[n0];

		for (int j = n0; j > i; j--) {
			L[j] = L[j - 1];
		}

		L[i] = temp;
	}

	return 0;
}
