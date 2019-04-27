#include <stdio.h>

int main(void){

	int num1, num2, num3 = 0;
	float media = 0;
	
	printf("Digite o numero 1: ");
	scanf("%d", &num1);
	printf("Digite o numero 2: ");
	scanf("%d", &num2);
	printf("Digite o numero 3: ");
	scanf("%d", &num3);
	
	media = (num1+num2+num3)/3;
	
	printf("\nA media eh: %.2f", media);
}
