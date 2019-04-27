#include <stdio.h>
#include <math.h>

int main(void){
	while(true){
		
		int numero = 0;
		int dezena = 0;
		int unidade = 0;
		int centena = 0;
		
		printf("Digite um numero de 3 casas: ");
		scanf("%d", &numero);
		
		centena = numero / 100;
		dezena = (numero-(centena*100))/10;
		unidade = (numero-((centena*100)+dezena*10));
		
		printf("A centena eh: %d \nA dezena eh.: %d \nA unidade eh: %d\n\n", centena, dezena, unidade);
	}
}
