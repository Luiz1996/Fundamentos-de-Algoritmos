/*Faça um programa que leia duas matrizes 3 x 3, calcule e imprima a multiplicação das duas.*/
#include <stdio.h>

int main(void){
	int m1[3][3], m2[3][3], res[3][3], soma = 0;
	
	//inicializando todas as matrizes
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			res[i][j] = 0;
			m1[i][j] = 0;
			m2[i][j] = 0;
		}
	}

	//carregando matria A (m1)
	printf("------------------------------------------------------- MATRIZ A -------------------------------------------------------");
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			int n = 0;
			printf("Insira o valor de A = [%d,%d]: ", (i+1), (j+1));
			scanf("%d", &m1[i][j]);
		}
	}
	
	//carregando matriz B (m2)
	printf("------------------------------------------------------- MATRIZ B -------------------------------------------------------");
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			int n = 0;
			printf("Insira o valor de B = [%d,%d]: ", (i+1), (j+1));
			scanf("%d", &m2[i][j]);
		}
	}
	for(int i = 0; i < 120; i++) printf("-");

	//calculando a matriz resultante
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			soma = 0;
			for(int k = 0; k < 3; k++){
				soma += m1[i][k] * m2[k][j];
			}
			res[i][j] = soma;
			//printf("\ni:%d | j:%d | res[%d][%d]: %d\n\n", i, j, i, j, res[i][j]);
		}
	}
	
	//imprime resultado
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			printf("%d ", res[i][j]);
		}
		printf("\n");
	}
}
