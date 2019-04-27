#include <stdio.h>

int main(void){
	int num1, num2, quoc, resto;
	
	printf("Insira o primeiro numero: ");
	scanf("%d", &num1);
	printf("Insira o segundo numero.: ");
	scanf("%d", &num2);
	
	resto = num1;
	while( resto >= num2){
		resto -= num2;
		quoc++;
	}
	printf("\nO valor de %d/%d, dara quociente: %d e resto: %d.", num1, num2, quoc, resto);
}
