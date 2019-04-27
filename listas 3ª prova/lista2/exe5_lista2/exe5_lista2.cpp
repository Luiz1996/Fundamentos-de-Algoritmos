/*Faça um programa que receba do usuário um arquivo texto. Crie outro arquivo texto contendo
o texto do arquivo de entrada, mas com as vogais substituídas por "*".*/
#include <stdio.h>

int main(void){
	FILE *p_leitura = fopen("original.txt", "r");
	char caracter = '\n', caracter_escolhido;
	
	FILE *p_escrita = fopen("resultado.txt", "w");
	caracter = fgetc(p_leitura);
	while(caracter != EOF){
		if(caracter == 'a' or caracter == 'A' or caracter == 'e' or caracter == 'E' or caracter == 'i' or caracter == 'I' or caracter == 'o' or caracter == 'O' or caracter == 'u' or caracter == 'U' )
			fputc('*', p_escrita);	
		else
			fputc(caracter, p_escrita);
		caracter = fgetc(p_leitura);
	}
	
	printf("Importacao terminada com exito!");
}

