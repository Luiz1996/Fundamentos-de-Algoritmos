//Crie uma função que receba um valor e retorne 1 se ele for positivo e 0 caso contrário.
#include <stdio.h>

int retorno(int x){
	return x >= 0 ? 1 : 0;
}

int main(void){
	int num, resultado = 1;
	
	printf("Digite um numero inteiro: ");
	scanf("%d", &num);
	
	resultado = retorno(num);
	printf("\nRetorno: %d", resultado);
}
