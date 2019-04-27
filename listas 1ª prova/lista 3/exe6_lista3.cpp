#include <stdio.h>

int main(void){
	int contador = 1, idade, menos_21 = 0, mais_50 = 0;
	while(contador <= 10){
		printf("Digite sua idade: ");
		scanf("%d", &idade);
		
		if(idade <= 0){
			printf("Idade invalida\n");
			continue;
		}else if(idade > 0 && idade < 21){
			menos_21++;
		}else if(idade > 50){
			mais_50++;
		}
		contador++;
	}
	
	printf("\nQuantidade de pessoas com menos de 21 anos: %d", menos_21);
	printf("\nQuantidade de pessoas com mais de 50 anos.: %d", mais_50);
}
