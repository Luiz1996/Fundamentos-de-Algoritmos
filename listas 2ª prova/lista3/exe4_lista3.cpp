#include <stdio.h>

int main(void){
	float temp[12], menor = 1000, maior = 0;
	int mes_menor, mes_maior;
	
	for(int i = 0; i < 12; i++){
		printf("Temperatura do mes %d: ", (i+1));
		scanf("%f", &temp[i]);
		
		if(menor > temp[i]){
			menor = temp[i];
			mes_menor = (i+1);
		}
		
		if(temp[i] > maior){
			maior = temp[i];
			mes_maior = (i+1);
		}
	}
	
	for(int i = 0; i < 12; i++){
		printf("\nMes %1.d : %.1f C", (i+1), temp[i]);
	}
	printf("\n\nMenor Temperatura: %.1f C no mes %d.", menor, mes_menor);
	printf("\nMaior Temperatura: %.1f C no mes %d.", maior, mes_maior);
}
