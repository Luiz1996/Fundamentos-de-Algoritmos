#include <stdio.h>

int main(void){
	int num = 0, maior = -9998;
	while(num != -9999){
		printf("Digite um numero inteiro: ");
		scanf("%d", &num);
		
		if(num > maior){
			maior = num;
		}
	}
	
	printf("\nMaior numero lido: %d", maior);
}
