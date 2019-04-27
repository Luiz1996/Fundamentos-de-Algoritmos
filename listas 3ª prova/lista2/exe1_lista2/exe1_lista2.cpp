/*1) (Valor: 1,0) Codifique, compile e execute um programa que:
 Crie/abra um arquivo texto de nome "arq.txt".
 Permita que o usuario entre com diversos caracteres nesse arquivo, até que o usuario entre com o caractere
"0".
 Reinicie o arquivo, fazendo o ponteiro apontar para seu início leia o arquivo caractere por caractere, e
escrevendo na tela todos os caracteres armazenados.*/
#include <stdio.h>
#include <string.h>

int main(void){
	FILE *p_escrita = fopen("arq.txt", "w");
	char caracter = '\n';
	while(caracter != '0'){
		caracter = getchar();
		fputc(caracter, p_escrita);
	}
	fclose(p_escrita);
	for(int i = 0; i < 120; i++) printf("-");
	
	p_escrita = fopen("arq.txt", "r");
	fseek(p_escrita, 0, SEEK_SET);
	caracter = fgetc(p_escrita);
	while(caracter != EOF){
		printf("%c", caracter);
		caracter = fgetc(p_escrita);
	}
	fclose(p_escrita);
}
