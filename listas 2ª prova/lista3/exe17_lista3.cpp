#include <stdio.h>

int main(void){
	int m[3][3] = {}, n1 = 0, n2 = 0, n3 = 0, n4 = 0, n5 = 0, n6 = 0;
	
	//carregando matriz
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			int n = 0;
			printf("Insira o valor da posicao [%d,%d]: ", (i+1),(j+1));
			scanf("%d", &n);
			m[i][j] = n;
		}
	}
	
	for(int i = 0; i < 120; i++) printf("-");
	//imprimindo matriz
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			printf("%d ", m[i][j]);
		}
		printf("\n");
	}
	
	for(int i = 0; i < 120; i++) printf("-");
	//calculando resultado
	n1 = m[0][0] * m[1][1] * m[2][2]; 
	n2 = m[0][1] * m[1][2] * m[2][0];
	n3 = m[0][2] * m[1][0] * m[2][1];
	n4 = m[2][0] * m[1][1] * m[0][2];
	n5 = m[2][1] * m[1][2] * m[0][0];
	n6 = m[2][2] * m[1][0] * m[0][1];
	
	//impressao do resultado
	printf("O resultado do determinante e: %d", (n1 + n2 + n3 - n4 - n5 - n6));
}
