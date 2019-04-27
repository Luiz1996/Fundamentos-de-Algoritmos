#include <stdio.h>

#define MIN_ELEITORES 20000

int main(void){
	
	char municipio[30];
	int eleitores = 0, num_votos = 0, votos_suficientes = 0;
	
	printf("Digite o nome do municipio: ");
	scanf("%s", municipio);
	printf("Insira o numero de eleitores: ");
	scanf("%d", &eleitores);
	printf("Insira o numero de votos do candidato mais votato: ");
	scanf("%d", &num_votos);
	
	votos_suficientes = ((eleitores / 100) * 50) + 1;
	
	if(eleitores < MIN_ELEITORES){
		printf("\nNao ha segundo turno.");
	}else{
		if(num_votos >= votos_suficientes){
			printf("\nPREFEITO ELEITO. Nao havera segundo turno.");
		}else if(num_votos < votos_suficientes){
			printf("\nHavera segundo turno.");
		}
	}
	
}
