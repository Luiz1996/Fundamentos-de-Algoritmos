/*Escreva um procedimento que receba uma string por parâmetro e altere todas suas letras
minúsculas para letras maiúsculas correspondentes.*/
#include <stdio.h>
#include <string.h>

void tudo_maiusculo(char *str){
	for(int i = 0; i < strlen(str); i++){
		int value = (int) str[i];
		if(value > 90){
			value -= 32;
			str[i] = value;
		}
		continue;
	}
	printf("\nNova string: \"%s\"", str);
}

int main(void){
	char str[100];
	int qtde = 0;
	
	printf("Insira uma string: ");
	scanf("%[^\n]s", str);
	tudo_maiusculo(str);
}
