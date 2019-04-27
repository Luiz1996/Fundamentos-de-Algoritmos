/*Defina um tipo de estrutura para armazenar um horário composto de hora, minutos e segundos.
Crie uma função para realizar a soma entre horários. A função deve receber dois horários e retornar um horário
que é o resultado da soma. Crie também um procedimento que recebe um horário e o apresenta na tela no
formato HH:MM:SS*/
#include <stdio.h>

typedef struct horario{
	int hora;
	int min;
	int seg;
} HORARIO;

HORARIO soma(HORARIO primeiro, HORARIO segunda, HORARIO resultado){
	resultado.hora = primeiro.hora + segunda.hora;
	resultado.min = primeiro.min + segunda.min;
	resultado.seg = primeiro.seg + segunda.seg;
	
	if(resultado.seg >= 60){
		resultado.min += (int) resultado.seg / 60; 
		resultado.seg = resultado.seg % 60;
	}
	
	if(resultado.min >= 60){
		resultado.hora += (int) resultado.min / 60; 
		resultado.min = resultado.min % 60;
	}
	
	return resultado;
}


void imprime(HORARIO resultado){
	for(int i = 0; i < 120; i++) printf("-");
	printf("\t\t\t\t\t\t    Resultado: %2.d:%2.d:%2.d\n", resultado.hora, resultado.min, resultado.seg);
}
int main(void){
	HORARIO primeiro, segunda, resultado;
	
	printf("\t\t\t\t\t\tPrimeiro HORA: HH:MM:SS\n\n");
	printf("Insira HH: ");
	scanf("%d", &primeiro.hora);
	printf("Insira %2.d:MM: ", primeiro.hora);
	scanf("%d", &primeiro.min);
	printf("Insira %2.d:%2.d:SS: ", primeiro.hora, primeiro.min);
	scanf("%d", &primeiro.seg);
	printf("\t\t\t\t\t\tPrimeiro HORA: %2.d:%2.d:%2.d\n", primeiro.hora, primeiro.min, primeiro.seg);
	for(int i = 0; i < 120; i++) printf("-");
	printf("\t\t\t\t\t\t Segunda HORA: HH:MM:SS\n\n");
	printf("Insira HH: ");
	scanf("%d", &segunda.hora);
	printf("Insira %2.d:MM: ", segunda.hora);
	scanf("%d", &segunda.min);
	printf("Insira %2.d:%2.d:SS: ", segunda.hora, segunda.min);
	scanf("%d", &segunda.seg);
	printf("\t\t\t\t\t\t Segunda HORA: %2.d:%2.d:%2.d\n", segunda.hora, segunda.min, segunda.seg);

	resultado = soma(primeiro, segunda, resultado);
	imprime(resultado);
}
