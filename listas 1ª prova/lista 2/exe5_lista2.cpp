#include <stdio.h>

int main(void){
	
	char comb = 'a';
	float valor_pagar, litros_comb;
	float gasolina = 4.39;
	float alcool = 3.29;
	float diesel = 3.49;
	
	printf("Informe a quantidade de litros abastecido: ");
	scanf("%f", &litros_comb);
	fflush(stdin);
	printf("Informe o tipo de combustivel [G]/[A]/[D]: ");
	scanf("%c", &comb);
	
	if(comb == 'a' or comb == 'A'){
		valor_pagar = alcool*litros_comb;
		printf("\nO valor a ser pago sera de R$%.2f .", valor_pagar);
	}else if(comb == 'g' or comb == 'G'){
		valor_pagar = gasolina*litros_comb;
		printf("\nO valor a ser pago sera de R$%.2f .", valor_pagar);
	}else if(comb == 'd' or comb == 'D'){
		valor_pagar = diesel*litros_comb;
		printf("\nO valor a ser pago sera de R$%.2f .", valor_pagar);
	}else{
		printf("\nTipo de combustivel invalido, tente novamente mais tarde.");
	}
}
