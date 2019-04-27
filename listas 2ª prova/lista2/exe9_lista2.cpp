#include <stdio.h>

void imprime_par(int valor, int numero){
	if(valor <= numero){
		printf("%d ", valor);
		valor += 2;
		imprime_par(valor, numero);
	}
	printf("\n");
}

int main(void){
	while(true){
		int n = 0;
	
		printf("Insira um numero >= 2: ");
		scanf("%d", &n);
	
		if(n % 2 == 0 && n >= 2){
			imprime_par(2, n);
		}else{
			printf("\nNumero fornecido invalido !!!\n");
			continue;
		}
	}
}