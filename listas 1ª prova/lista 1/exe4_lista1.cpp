#include <stdio.h>

int main(void){

	float media, nota1, nota2, nota3, nota4 = 0;
	
	printf("Digite o nota 1: ");
	scanf("%f", &nota1);
	
	printf("Digite o nota 2: ");
	scanf("%f", &nota2);
	
	printf("Digite o nota 3: ");
	scanf("%f", &nota3);
	
	printf("Digite o nota 4: ");
	scanf("%f", &nota4);
	
	media = (2*nota1 + 2*nota2 + 3*nota3 + 3*nota4)/10; // soma dos pesos
	
	printf("\nA media eh: %.2f", media);
}
