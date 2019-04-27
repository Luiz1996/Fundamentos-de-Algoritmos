#include <stdio.h>

#define KM_LITRO 12

int main(void){
	
	float tempo_viagem, vel_media, dist_percorrida, litros_combustivel_gastos;
	
	printf("Insira tempo gasto na viagem em HR(s): ");
	scanf("%f", &tempo_viagem);
	printf("Insira a velocidade media em KM/H: ");
	scanf("%f", &vel_media);
	
	dist_percorrida = tempo_viagem * vel_media;
	litros_combustivel_gastos = dist_percorrida / KM_LITRO;
	
	printf("\nA viagem teve velocidade media de %.2f e foram gastos %.2f hora(s).", vel_media, tempo_viagem);
	printf("\nO motorista percorreu %.2f KM(s) e gastou %.2f litros de combustivel.", dist_percorrida, litros_combustivel_gastos);
}
