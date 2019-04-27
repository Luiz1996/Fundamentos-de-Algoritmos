#include <stdio.h>

int main(void){
	
	float salario = 0, novo_sal = 0;
	
	printf("Forneca seu salario: R$");
	scanf("%f", &salario);
	
	if(salario <= 800){
		novo_sal = salario + 250 + (salario*0.15);
		printf("Seu novo salario e de: R$%.2f .", novo_sal);
	}else if(salario > 800 && salario <= 1000){
		novo_sal = salario + 200 + (salario*0.15);
		printf("Seu novo salario e de: R$%.2f .", novo_sal);
	}else if(salario > 1000 && salario <= 1500){
		novo_sal = salario + 200 + (salario*0.10);
		printf("Seu novo salario e de: R$%.2f .", novo_sal);
	}else if(salario > 1500){
		novo_sal = salario + 200 + (salario*0);
		printf("Seu novo salario e de: R$%.2f .", novo_sal);
	}
}
