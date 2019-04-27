#include <stdio.h>
#include <stdlib.h>

#define TAM 3
int main(void){
	int	m[TAM][TAM] = {};
	float media = 0;
	
	//carregando vetor
	for(int i = 0; i < TAM; i++){
		for(int j = 0; j < TAM; j++){
			system("cls"); //limpar tela
			printf("Insira o valor de [%d,%d] para a Matriz[3,3]: ", (i+1), (j+1));
			scanf("%d", &m[i][j]);
		}
	}
	
	//somando valores da diag.principal
	for(int i = 0; i < TAM; i++){
		media += m[i][i];
	}
	
	//impressão do resultado
	printf("\nMedia: %.2f", (media/TAM));
}
