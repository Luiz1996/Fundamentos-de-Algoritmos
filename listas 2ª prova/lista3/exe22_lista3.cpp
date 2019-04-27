#include <stdio.h>
#include <stdlib.h>

int main(void){
	int n = 0, m = 0, aux = 0;
	bool ver = true;
	
	printf("Iremos criar uma matriz N x M...\n");
	printf("Insira o valor de N: ");
	scanf("%d", &n);
	printf("Insira o valor de M: ");
	scanf("%d", &m);
	
	int m1[n][m] = {}, m2[m][n] = {}, transp[m][n] = {};
	
	//carregando matriz A
	for (int i = 0; i < n; i++) {
    	for (int j= 0; j < m; j++) {
    		system("cls");
			printf("Matriz A[%d, %d]: ", i+1, j+1);
      		scanf ("%hi", &m1[i][j]);
    	}
  	}
  	
  	//carregando matriz B
	for (int i = 0; i < n; i++) {
    	for (int j= 0; j < m; j++) {
    		system("cls");
			printf("Matriz B[%d, %d]: ", i+1, j+1);
      		scanf ("%hi", &m2[i][j]);
    	}
  	}
	
	//fazendo a inversão
	for (int i = 0; i < n; i++) {
    	for (int j = i+1; j < m; j++) {
			if (j != i) {
  				aux = m1[i][j];
   				transp[i][j] = m1[j][i];
   				m1[j][i] = aux;
      		}
    	}
	}
	
	//verificando se é transposta
	for (int i = 0; i < n; i++) {
    	for (int j = i+1; j < m; j++) {
			if (m2[i][j] != transp[i][j]) {
  				ver = false;
      		}
    	}
	}
	
	system("cls");
	//imprimindo resultado
	if(ver){
		printf("A matriz B eh transposta de A.");
	}else if(!ver){
		printf("A matriz B NAO eh transposta de A.");
	}
}
