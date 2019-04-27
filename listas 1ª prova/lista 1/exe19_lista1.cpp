#include <stdio.h>

int main(void){
	
	int num1, num2, quociente, resto = 0;
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &num1);
	printf("Digite o segundo numero.: ");
	scanf("%d", &num2);
	
	resto = num1 % num2;
	quociente = num1 / num2;
	
	printf("\n\nDividendo: %d\nDivisor: %d\nQuociente: %d\nResto: %d .", num1, num2, quociente, resto);
}
