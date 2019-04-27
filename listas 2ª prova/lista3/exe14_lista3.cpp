#include <stdio.h>

int main(void){
	short matriz[8][4] = {0}, resultado[8] = {0}, maior = 0, time = -1;
	
	//carregando matriz
	for(int i = 0; i < 8; i++){
		for(int j = 0; j < 4; j++){
			short n = 0;
			printf("Forneca a pontuacao do %d time no %d jogo: ", (i+1), (j+1));
			scanf("%hi", &n);
			matriz[i][j] = n;
		}
		printf("\n"); //pular 1 linha...
	}
	
	//realizando a soma das pontuacoes
	for(int i = 0; i < 8; i++){
		for(int j = 0; j < 4; j++){
			int n = 0;
			resultado[i] += matriz[i][j];
		}
		printf("\n"); //pular 1 linha...
	}
	
	//imprimindo todos os resultados
	for(int i = 0; i < 8; i++){
		printf("\nO time %d teve um total de %hi ponto(s).", (i+1), resultado[i]);
		if(resultado[i] > maior){
			maior = resultado[i];
			time = i;
		}
	}
	
	printf("\n\nO time %hi teve a maior pontuacao: %hi ponto(s).", (time+1), maior);
	
}
