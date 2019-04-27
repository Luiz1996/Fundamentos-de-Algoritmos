#include <stdio.h>

int main(void){
	while(true){
		
		int num1 = 0, num2 = 0, num3 = 0;
		
		printf("Digite o primeiro numero: ");
		scanf("%d", &num1);
		printf("Digite o segundo numero.: ");
		scanf("%d", &num2);
		printf("Digite o terceiro numero: ");
		scanf("%d", &num3);
		
		if(num1 > num2 && num2 > num3 ){
			printf("\nMenor: %d e Maior: %d.\n", num3, num1);
		}else if(num3 > num2 && num2 > num1){
			printf("\nMenor: %d e Maior: %d.\n", num1, num3);
		}else if(num2 > num1 && num1 > num3){
			printf("\nMenor: %d e Maior: %d.\n", num3, num2);
		}else if(num2 > num3 && num3 > num1){
			printf("\nMenor: %d e Maior: %d.\n", num1, num2);
		}else if(num3 > num1 && num1 > num2){
			printf("\nMenor: %d e Maior: %d.\n", num2, num3);
		}else if(num1 > num3 && num3 > num2){
			printf("\nMenor: %d e Maior: %d.\n", num2, num1);
		}
	}
}
