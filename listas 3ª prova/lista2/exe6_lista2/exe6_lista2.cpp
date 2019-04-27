/*Faça um programa que receba o nome de um arquivo de entrada e outro de saída. O arquivo
de entrada contém em cada linha o nome de uma cidade (ocupando 40 caracteres) e o seu número de habitantes.
O programa deverá ler o arquivo de entrada e gerar um arquivo de saída onde aparece o nome da cidade mais
populosa seguida pelo seu número de habitantes.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
	char nome_arq[25], caracter;
	int i = 0;
	
	//abrindo primeiro arquivo para leitura
	printf("Insira o nome do arquivo a ser IMPORTADO: ");
	scanf("%s", nome_arq);
	strcat(nome_arq, ".txt");
	FILE *p_leitura = fopen(nome_arq, "r");
	
	//abrindo segundo arquivo para escrita
	printf("Insira o nome do arquivo a ser CRIADO...: ");
	scanf("%s", nome_arq);
	strcat(nome_arq, ".txt");
	
	//ler arquivo de entrada
	char cidade[40];
	int hab, habitantes = 0;
	int ver = fscanf(p_leitura, "%s %d", cidade, &hab);
	while(ver != EOF){
		if(hab > habitantes){
			FILE *p_escrita = fopen(nome_arq, "w");
			habitantes = hab;
			//escrevendo dados no arquivo
			fputs(cidade, p_escrita);
			fputs(" - ", p_escrita);
			fprintf(p_escrita, "%d", hab);
			fclose(p_escrita); // fechando ponteiro de escrita
		}
		ver = fscanf(p_leitura, "%s %d", cidade, &hab);
	}
	
	//fechando ponteiro de leitura
	fclose(p_leitura);
}
