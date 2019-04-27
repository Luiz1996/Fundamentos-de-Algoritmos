#include <stdio.h>

int main(void){
	int m[2][2] = {}, n1 = 1, n2 = 1;
	
	//carregando matriz
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 2; j++){
			int n = 0;
			printf("Insira o valor da posicao [%d,%d]: ", (i+1),(j+1));
			scanf("%d", &n);
			m[i][j] = n;
		}
	}
	
	//calculando resultado
	for(int i = 0; i < 120; i++) printf("-");
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 2; j++){
			if(i == j){
				n1 *= m[i][j];
			}else if(i != j){
				n2 *= m[i][j];
			}
		}
	}
	
	//impressao do resultado
	printf("O resultado do determinante e: %d", (n1 - n2));
}
