#include <stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void){
	
	int conta[10000] = {0}, cli_negativos = 0, cli_agencia = 0, i;
	float saldo[10000] = {0}, saldo_ag = 0;
	char nome[30];
	
	
	for(i = 0; i < 10000; i++){;
		printf("Conta: ");
		scanf("%d", &conta[i]);
		printf("nome.: ");
		scanf("%s", nome);
		printf("Saldo: ");
		scanf("%f", &saldo[i]);
		printf("---------------------------------\n");
	
		if(conta[i] == 999 ){
			conta[i] = 0;
			printf("Fim da coleta dos dados, aguarde ate inicio da impressao dos dados.\n\n");
			printf("---------------------------------\n");
			break;
		}
		
		cli_agencia++;
		saldo_ag += saldo[i];
		
	}
	
	
	for(int j = 0; j < i; j++){
		char status[] = "ABCDEFGH";
		if(saldo[j] < 0){
			strcpy(status, "NEGATIVO");
			cli_negativos++;
		}else if(saldo[j] >= 0){
			strcpy(status, "POSITIVO");
		}
		printf("Cliente %d, conta: %d, saldo: %.2f, status: %s \n", j+1, conta[j], saldo[j], status);
	}
	
	printf("\n\nTotal Clientes: %d, Clientes Negativos: %d, Saldo da Agencia: %.2f", cli_agencia, cli_negativos, saldo_ag);
}
