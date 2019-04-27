#include <stdio.h>

int main(void){
	// DECLARAR, LER E ESCREVER O CPF DE UMA PESSOA:
	
	char cpf[12];
	
	printf("Insira seu CPF:");
	scanf("%s", cpf);
	
	printf("Seu CPF eh: %s", cpf);
	
	
	return 0;
}
