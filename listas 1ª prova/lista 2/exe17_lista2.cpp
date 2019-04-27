#include <stdio.h>

int main(void){
	
	float valor_compra, desconto, valor_pagar;
	
	printf("Qual o valor da compra? R$ ");
	scanf("%f", &valor_compra);
	
	if(valor_compra <= 100){
		desconto = valor_compra * 0.05;
		valor_pagar = valor_compra - desconto;
		printf("O valor do desconto foi de R$%.2f e o novo valor a ser pago e de R$%.2f", desconto, valor_pagar);
	}else if(valor_compra > 100 && valor_compra < 200){
		desconto = valor_compra * 0.10;
		valor_pagar = valor_compra - desconto;
		printf("O valor do desconto foi de R$%.2f e o novo valor a ser pago e de R$%.2f", desconto, valor_pagar);
	}else if(valor_compra >= 200){
		desconto = valor_compra * 0.20;
		valor_pagar = valor_compra - desconto;
		printf("O valor do desconto foi de R$%.2f e o novo valor a ser pago e de R$%.2f", desconto, valor_pagar);
	}
}
