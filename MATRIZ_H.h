#ifndef MATRIZ_H
#define MATRIZ_H

#include<limits.h>
#include<iostream>

#define TAMANHO_MATRIZ 5

using namespace std;
//Utilizar como parâmetro nas funções de busca
#define ESCOPO_BUSCA_MATRIZ_DIAGONALPRINCIPAL 1
#define ESCOPO_BUSCA_MATRIZ_DIAGONALSECUNDARIA 2
#define ESCOPO_BUSCA_MATRIZ_DIAGONAIS 3
#define ESCOPO_BUSCA_MATRIZ_COMPLETA 4


int maiorValorEmMatriz(int matriz[TAMANHO_MATRIZ][TAMANHO_MATRIZ], int escopoBusca) {

	int maiorMatriz = INT_MIN;
	int maiorPrimaria = INT_MIN;
	int maiorSecundaria = INT_MIN;

	switch (escopoBusca) {
	case 1:
		for (int i = 0; i < TAMANHO_MATRIZ; i++) {
			if (matriz[i][i] > maiorMatriz) {
				maiorMatriz = matriz[i][i];
			}
		}
		break;

	case 2:
		for (int i = 4; i > 0; i--) {
			for (int j = 0; j < TAMANHO_MATRIZ; j++) {
				if (j == (TAMANHO_MATRIZ - 1 - i)) {
					if (matriz[i][j] > maiorMatriz) {
						maiorMatriz = matriz[i][j];
					}
				}
			}
		}
		break;

	case 3:
		for (int i = 0; i < TAMANHO_MATRIZ; i++) {
			if (matriz[i][i] > maiorPrimaria) {
				maiorPrimaria = matriz[i][i];
			}
		}
		for (int i = 4; i > 0; i--) {
			for (int j = 0; j < TAMANHO_MATRIZ; j++) {
				if (j == (TAMANHO_MATRIZ - 1 - i)) {
					if (matriz[i][j] > maiorSecundaria) {
						maiorSecundaria = matriz[i][j];
					}
				}
			}
		}
		if (maiorPrimaria > maiorSecundaria) {
			maiorMatriz = maiorPrimaria;
		}
		else {
			maiorMatriz = maiorSecundaria;
		}
		break;

	case 4:
		for (int i = 0; i < TAMANHO_MATRIZ; i++) {
			for (int j = 0; j < TAMANHO_MATRIZ; j++) {
				if (matriz[i][j] > maiorMatriz) {
					maiorMatriz = matriz[i][j];
				}
			}
		}
		break;

	
	}

	return maiorMatriz;
}


int menorValorEmMatriz(int matriz[TAMANHO_MATRIZ][TAMANHO_MATRIZ], int escopoBusca) {

	int menorMatriz = INT_MAX;
	int menorPrimaria = INT_MAX;
	int menorSecundaria = INT_MAX;

	switch (escopoBusca) {
	case 1:
		for (int i = 0; i < TAMANHO_MATRIZ; i++) {
			if (matriz[i][i] < menorMatriz) {
				menorMatriz = matriz[i][i];
			}
		}
		break;

	case 2:
		for (int i = 4; i > 0; i--) {
			for (int j = 0; j < TAMANHO_MATRIZ; j++) {
				if (j == (TAMANHO_MATRIZ - 1 - i)) {
					if (matriz[i][j] < menorMatriz) {
						menorMatriz = matriz[i][j];
					}
				}
			}
		}
		break;

	case 3:
		for (int i = 0; i < TAMANHO_MATRIZ; i++) {
			if (matriz[i][i] < menorPrimaria) {
				menorPrimaria = matriz[i][i];
			}
		}
		for (int i = 4; i > 0; i--) {
			for (int j = 0; j < TAMANHO_MATRIZ; j++) {
				if (j == (TAMANHO_MATRIZ - 1 - i)) {
					if (matriz[i][j] < menorSecundaria) {
						menorSecundaria = matriz[i][j];
					}
				}
			}
		}
		if (menorPrimaria > menorSecundaria) {
			menorMatriz = menorPrimaria;
		}
		else {
			menorMatriz = menorSecundaria;
		}
		break;

	case 4:
		for (int i = 0; i < TAMANHO_MATRIZ; i++) {
			for (int j = 0; j < TAMANHO_MATRIZ; j++) {
				if (matriz[i][j] < menorMatriz) {
					menorMatriz = matriz[i][j];
				}
			}
		}
		break;
	
	}
	return menorMatriz;
}

#endif // !1
