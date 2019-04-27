#include <stdio.h>
#include <stdlib.h>

int main(void){
	int	m[6][6] = {}, maior = 0;
	
	
	//carregando vetor
	for(int i = 0; i < 6; i++){
		for(int j = 0; j < 6; j++){
			system("cls"); //limpar tela
			printf("Insira o valor de [%d,%d] para a Matriz[6,6]: ", (i+1), (j+1));
			scanf("%d", &m[i][j]);
		}
	}
	
	//verificando maior
	for(int i = 0; i < 6; i++){
		if(m[i][i] > maior) maior = m[i][i];
	}
	
	//apresentando os maior
	printf("\nO maior eh: %d", maior);
}
