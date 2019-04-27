#include <stdio.h>

int main(void){
	int num1, num2, resultado;
	
	printf("Primeiro numero: ");
	scanf("%d", &num1);
	printf("Segundo numero.: ");
	scanf("%d", &num2);
	
	for(int i = 1; i <= num2; i++){
		resultado += num1;
	}
	printf("\nResultado: %d.", resultado);
}
