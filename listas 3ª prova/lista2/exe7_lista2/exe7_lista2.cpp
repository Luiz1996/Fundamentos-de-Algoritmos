/*Fa�a um programa que permita que o usu�rio entre com diversos nomes e telefone para
cadastro, e crie um arquivo com essas informa��es, uma por linha. O usu�rio finaliza a entrada com "0"para o
telefone.*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void){
	char nome_arq[25], nome[50];
	long telefone = 1;
	
	//abrindo segundo arquivo para escrita
	printf("Insira o nome do arquivo a ser CRIADO: ");
	scanf("%s", nome_arq);
	strcat(nome_arq, ".txt");
	FILE *p_escrita = fopen(nome_arq, "w");
	
	while(telefone > 0){
		system("cls");
		fflush(stdin);
		
		//obtendo dados a serem salvos no arquivo
		printf("Insira o nome..: ");
		scanf("%[^\n]s", nome);
		fflush(stdin);
		printf("Insira telefone: ");
		scanf("%li", &telefone);
		
		//salvando dados no arquivo .txt
		fputs(nome, p_escrita);
		fputc('|', p_escrita);
		fprintf(p_escrita, "%li", telefone);
		fputc('\n', p_escrita);
	}
}
