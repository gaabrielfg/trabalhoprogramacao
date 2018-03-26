#ifndef VETOR_H
#define VETOR_H

#include <limits.h>

using namespace std;


void bubbleSort(int vetor[], int tamanho, bool ordenacaoCrescente) {
	int aux = 0;
	if (ordenacaoCrescente == 1) {
		for (int i = 1; i < tamanho; i++) {
			for (int j = 0; j < tamanho; j++) {
				if (vetor[j] > vetor[j + 1]) {
					aux = vetor[j];
					vetor[j] = vetor[j + 1];
					vetor[j + 1] = aux;
				}
			}
		}
	}
	else {
		for (int i = 1; i < tamanho; i++) {
			for (int j = tamanho; j >= 0; j--) {
				if (vetor[j] > vetor[j - 1]) {
					aux = vetor[j];
					vetor[j] = vetor[j - 1];
					vetor[j - 1] = aux;
				}
			}
		}
	}
}

int maiorValorEmVetor(int vetor[], int tamanho) {
	int maiorValor = INT_MIN;
	for (int i = 0; i < tamanho; i++) {
		if (vetor[i] > maiorValor) {
			maiorValor = vetor[i];
		}
	}
	return maiorValor;
}
int menorValorEmVetor(int vetor[], int tamanho) {
	int menorValor = INT_MAX;
	for (int i = 0; i < tamanho; i++) {
		if (vetor[i] < menorValor) {
			menorValor = vetor[i];
		}
	}
	return menorValor;
}

#endif // !VETOR_H
