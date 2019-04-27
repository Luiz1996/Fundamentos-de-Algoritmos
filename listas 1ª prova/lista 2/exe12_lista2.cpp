#include <stdio.h>

int main(void){
	
	float salario, novo_salario;
	
	printf("Insira o salario do funcionario: ");
	scanf("%f", &salario);
	
	if(salario < 2000.00){
		novo_salario = ((salario/100)*30)+salario;
		printf("\nO salario passara de R$%.2f para o valor de R$%.2f .", salario, novo_salario);
	}else {
		printf("\nO salario permecera no valor de R$%.2f .", salario);
	}
}
