#include <stdio.h>

int main(void){
	while(true){
			
		int dia_agendado, mes_agendado, ano_agendado, dia_dev, mes_dev, ano_dev;
		
		printf("DATA AGENDADA PARA ENTREGA:\n");
		printf("Dia: ");
		scanf("%d", &dia_agendado);
		printf("Mes: ");
		scanf("%d", &mes_agendado);
		printf("Ano: ");
		scanf("%d", &ano_agendado);
		
		printf("DATA DE DEVOLUCAO:\n");
		printf("Dia: ");
		scanf("%d", &dia_dev);
		printf("Mes: ");
		scanf("%d", &mes_dev);
		printf("Ano: ");
		scanf("%d", &ano_dev);
		
		if(mes_dev > mes_agendado && ano_dev == ano_agendado){
			printf("\nAtrasado.\n\n");
		}else if(ano_dev > ano_agendado){
			printf("\nAtrasado.\n\n");
		}else if(dia_dev > dia_agendado && mes_dev == mes_agendado && ano_dev == ano_agendado){
			printf("\nAtrasado.\n\n");
		}else{
			printf("Entraga em dia!\n\n");
		}
	}
}
