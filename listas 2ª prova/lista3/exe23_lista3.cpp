/*Na Teoria de Sistemas define-se como elemento minimax de uma matriz o menor elemento
da linha em que se encontra o maior elemento da matriz.*/
#include <stdio.h>
#include <stdlib.h>

#define TAM 5
int main(void){
	int	m[TAM][TAM] = {}, minimax = 0, maior = 0, linha = 0;
	
	//carregando vetor
	for(int i = 0; i < TAM; i++){
		for(int j = 0; j < TAM; j++){
			system("cls"); //limpar tela
			printf("Insira o valor de [%d,%d] para a Matriz[5,5]: ", (i+1), (j+1));
			scanf("%d", &m[i][j]);
		}
	}
	
	//encontrando o maior e a linha do maior	
	maior = m[0][0];
	for(int i = 0; i < TAM; i++){
		for(int j = 0; j < TAM; j++){
			if(m[i][j] > maior){
				maior = m[i][j];
				linha = i;
			}
		}
	}
	
	//encontrando minimax
	minimax = m[linha][0];
	for(int i = 0; i < TAM; i++){
		if(m[linha][i] < minimax){
			minimax = m[linha][i];
		}
	}
	
	printf("\nMinimax: %d", minimax);
}
