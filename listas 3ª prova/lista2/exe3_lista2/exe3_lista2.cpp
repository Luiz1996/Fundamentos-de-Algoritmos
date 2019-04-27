/*Faça um programa que receba do usuário um arquivo texto e mostre na tela quantas letras
dentro do arquivo são vogais.*/
#include <stdio.h>

int main(void){
	FILE *p_leitura = fopen("arquivo.txt", "r");
	int contador = 0;
	char caracter = '\n';
	
	while(caracter != EOF){
		caracter = fgetc(p_leitura);
		if(caracter == 'a' or caracter == 'A' or caracter == 'e' or caracter == 'E' or caracter == 'i' or caracter == 'I' or caracter == 'o' or caracter == 'O' or caracter == 'u' or caracter == 'U' )
			contador++;
	}
	
	printf("O arquivo possui %d voga(l\\is).", contador);
}
