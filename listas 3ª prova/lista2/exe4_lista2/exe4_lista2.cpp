/*Faça um programa que receba do usuário um arquivo texto e um caracter. Mostre na tela
quantas vezes aquele caractere ocorre dentro do arquivo.*/
#include <stdio.h>

int main(void){
	FILE *p_leitura = fopen("arquivo.txt", "r");
	int contador = 0;
	char caracter = '\n', caracter_escolhido;
	
	printf("Escolha um caracter: ");
	scanf("%c", &caracter_escolhido);
	
	while(caracter != EOF){
		caracter = fgetc(p_leitura);
		if(caracter == caracter_escolhido)
			contador++;
	}
	
	printf("\nO caracter %c se repetiu %d vez(es).", caracter_escolhido, contador);
}

