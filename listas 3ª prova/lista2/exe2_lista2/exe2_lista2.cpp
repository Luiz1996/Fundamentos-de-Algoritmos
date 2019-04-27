/*Faça um programa que receba do usuário um arquivo texto e mostre na tela quantas linhas
esse arquivo possui.*/
#include <stdio.h>

int main(void){
	FILE *p_leitura = fopen("arquivo.txt", "r");
	int contador = 0;
	char caracter = '\n';
	
	while(caracter != EOF){
		caracter = fgetc(p_leitura);
		if(caracter == '\n')
			contador++;
	}
	
	printf("O arquivo possui %d linha(s).", contador);
}
