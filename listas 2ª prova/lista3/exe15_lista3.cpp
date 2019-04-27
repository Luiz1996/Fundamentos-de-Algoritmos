#include <stdio.h>

int main(void){
	int n = 0, m = 0, aux = 0;
	
	printf("Iremos criar uma matriz N x M...\n");
	printf("Insira o valor de N: ");
	scanf("%d", &n);
	printf("Insira o valor de M: ");
	scanf("%d", &m);
	for(int i = 1; i <= 120; i++) printf("-");
	
	int matriz[n][m] = {0};
	
	//carregando vetor
	for (int i = 0; i < n; i++) {
    	for (int j= 0; j < m; j++) {
    		printf("[%d, %d]: ", i, j);
      		scanf ("%hi", &matriz[i][j]);
    	}
  	}
  	for(int i = 1; i <= 120; i++) printf("-");
	
	//fazendo a inversão
	for (int i = 0; i < n; i++) {
    	for (int j = i+1; j < m; j++) {
			if (j != i) {
  				aux = matriz[i][j];
   				matriz[i][j] = matriz[j][i];
   				matriz[j][i] = aux;
      		}
    	}
	}
	
	//imprimindo resultado
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			printf("%hi ", matriz[i][j]);
		}
		printf("\n");
	}
}
