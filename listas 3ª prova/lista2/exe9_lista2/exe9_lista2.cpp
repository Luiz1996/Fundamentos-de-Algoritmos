/*Faça um programa que recebe um vetor de 10 números, converta cada um desses números
para binário e grave a sequência de 0s e 1s em um arquivo texto. Cada número deve ser gravado em uma linha.*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define TAM_V 10

void convBinario(int *v){
	system("cls");
	char nome_arq[25];
	
	//abrindo segundo arquivo para escrita
	printf("Insira o nome do arquivo a ser CRIADO: ");
	scanf("%s", nome_arq);
	strcat(nome_arq, ".txt");
	FILE *p_escrita = fopen(nome_arq, "w");
	
	printf("\nO arquivo %s foi criado com sucesso!\n", nome_arq);
	for(int k = 0; k < 120; k++) printf("-");
	
	for(int j = 0; j < TAM_V; j++){
		int resto[15], cont, i = 0;
		if(v[j] == 0){
				printf("v[%d] = %d --> 0 em binario.\n", j + 1, v[j]);
				fputs("0\n", p_escrita);
				continue;	
			}
		printf("v[%d] = %d --> ", j + 1, v[j]);
		while(v[j] >= 1){
			resto[i] = v[j] % 2;
			v[j] = v[j] / 2;
			i++;
		}
			
		cont = i - 1;
		
		while(cont >= 0){
			int caracter = resto[cont];
			printf("%d", resto[cont]);
			fprintf(p_escrita, "%d", caracter);
			cont--;
		}
		fputc('\n', p_escrita);
		printf(" em binario.\n");
	}	
}

int main(void){
	int v[10];
	
	for(int  i = 0; i < TAM_V; i++){
		printf("Insira um valor para o v[%d]: ", i+1);
		scanf("%d", &v[i]);
		system("cls");
	}	
	
	convBinario(v); //faz a conversão para binário
}
