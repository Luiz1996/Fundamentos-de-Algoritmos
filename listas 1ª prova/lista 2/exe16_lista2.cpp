#include <stdio.h>

int main(void){
	while(true){
		
		float altura = 0, peso = 0;
		
		printf("Insira sua altura em metros: ");
		scanf("%f", &altura);
		printf("Insira seu pedo em Kg......: ");
		scanf("%f", &peso);
		
		if(altura < 1.20){
			if(peso < 60.0){
				printf("\nA\n\n");
			}else if(peso >= 60.0 && peso <= 90.0){
				printf("\nD\n\n");
			}else if(peso > 90.0){
				printf("\nG\n\n");
			}
		}else if (altura >= 1.20 && altura <= 1.70){
			if(peso < 60.0){
				printf("\nB\n\n");
			}else if(peso >= 60.0 && peso <= 90.0){
				printf("\nE\n\n");
			}else if(peso > 90.0){
				printf("\nH\n\n");
			}
		}else if(altura > 1.70){
			if(peso < 60.0){
				printf("\nC\n\n");
			}else if(peso >= 60.0 && peso <= 90.0){
				printf("\nF\n\n");
			}else if(peso > 90.0){
				printf("\nI\n\n");
			}
		}
	}
}
