#include <stdio.h>

void calcula_fat_duplo(int valor, int resultado, int numero){
	if(valor <= numero){
		resultado *= valor;
		valor += 2;
		calcula_fat_duplo(valor, resultado, numero);
	}
	printf("\nResultado: %d", resultado);
}

int main(void){
	while(true){
		int n = 0, resultado = 1;
	
		printf("Insira um numero >= 1: ");
		scanf("%d", &n);
	
		if(n % 2 != 0 && n >= 1){
			calcula_fat_duplo(1, resultado, n);
			printf("\n\n"); /*pular linha*/
		}else{
			printf("\nNumero fornecido invalido !!!\n");
			continue;
		}
	}
}