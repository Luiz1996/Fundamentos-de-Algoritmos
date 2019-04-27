#include <stdio.h>

int main(void){

	while(true){
	
		int tempo_evento = 0;
		int min = 0;
		int hora = 0;
		int segundos = 0;
		
		printf("Digite o tempo de duracao do evento em segundos:");
		scanf("%d", &tempo_evento);

		hora = tempo_evento / 3600;
		min  = (tempo_evento-(hora*3600)) / 60;
		segundos = (tempo_evento-(min*60)) % 60;	
	
		printf("O evento durou %d hora(s), %d minutos e %d segundos.\n\n", hora, min, segundos);		
	}
}
