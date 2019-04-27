#include <stdio.h>
#include <stdlib.h>

bool verrifica1(char v_cpf[], int n){
	bool status = false;
	int soma = 0, j = 10, valor = 0, resultado = 0;
	for(int i = 0; i <= 8; i++){
		soma += (v_cpf[i]*j);
		j--;
	}
	
	valor = (soma / 11) * 11;
	resultado = (soma - valor);
	
	if(resultado == 1 || resultado == 0){
		if(v_cpf[9] == 0){
			status = true;
		}
	}else{
		if(v_cpf[9] == (11 - resultado)){
			status =  true;
		}
	}
	
	return status;
}

bool verrifica2(char v_cpf[], int n){
	bool status = false;
	int soma = 0, j = 11, valor = 0, resultado = 0;
	for(int i = 0; i <= 9; i++){
		soma += (v_cpf[i]*j);
		j--;
	}
	
	valor = (soma / 11) * 11;
	resultado = (soma - valor);
	
	if(resultado == 1 || resultado == 0){
		if(v_cpf[10] == 0){
			status = true;
		}
	}else{
		if(v_cpf[10] == (11 - resultado)){
			status =  true;
		}
	}
	
	return status;		
}

int main(void){
	int i = 0;
	char v_cpf[12];
	bool ver1 = false, ver2 = false;
	
	//carregando o vetor
	printf("CPF: ");
	scanf("%s", v_cpf);
	for(i = 0; i <= 10; i++) {
		v_cpf[i] = v_cpf[i] - 48;
	}
	
	//realizando a verificacao da validade dos digitos do CPF
	ver1 = verrifica1(v_cpf, 11);
	ver2 = verrifica2(v_cpf, 11);
	
	//impressao do resultado
	if(ver1 && ver2){
		printf("\nCPF: ");
		for(int i = 0; i <= 10; i++){
			printf("%d", v_cpf[i]);
		}
		printf(" e VALIDO!");
	}else{
		printf("\nCPF INVALIDO!");
	}
}
