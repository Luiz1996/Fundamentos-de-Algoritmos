#include <stdio.h>
#include <math.h>

int main(void){
	
	char nome[50], caractere;
	float kg, altura, imc;
	int i = 0;
	
	printf("Insira seu nome: ");
	
	do{ //CAPTURANDO NOME DO USUÁRIO
		caractere = getchar();
		nome[i] = caractere;
		++i;
		
	}while(caractere != '\n' and i <= 50);
	nome[i-1] = '\0';
	
	printf("Insira sua altura em metros: ");
	scanf("%f", &altura);
	printf("Insira seu peso em Kg: ");
	scanf("%f", &kg);
	
	imc = (kg/pow(altura,2));
	
	printf("Ola %s, seu IMC eh: %.1f", nome, imc);
}
