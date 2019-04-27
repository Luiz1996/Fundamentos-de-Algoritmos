#include <stdio.h>

int main(void){
	int m[5][5] = {};
	bool ver = true;
	
	//carregando matriz	
	for(int i = 0; i < 5; i++){
		for(int j = 0; j < 5; j++){
			printf("Insira o valor [%d,%d] da Matriz M: ", (i+1), (j+1));
			scanf("%d", &m[i][j]);
		}
	}
	for(int i = 0; i < 120; i++) printf("-");
	
	//verificando se é matriz superior
	for(int i = 1; i < 5; i++){
		for(int j = 0; j < i; j++){
			if(m[i][j] != 0){
				ver = false;
			}
		}
	}
	
	//imprimindo resultado
	if(ver){
		printf("A matriz M eh triangular superior.");
	}else if(!ver){
		printf("A matriz M NAO eh triangular superior.");
	}
}
