#include <stdio.h>

int main(void){
	
	float sal_minimo, kwt, valor_kw, valor_pagar, valor_pagar_desconto;
	
	printf("Insira o salario minimo: ");
	scanf("%f", &sal_minimo);
	printf("Insira o gasto em Kw...: ");
	scanf("%f", &kwt);
	
	valor_kw = (((sal_minimo / 5) * (kwt/80)) / 80);
	valor_pagar = kwt * valor_kw;
	valor_pagar_desconto = valor_pagar - 10;
	
	printf("\n- Valor por Kw.........: %.2f", valor_kw);
	printf("\n- Valor a pagar........: %.2f", valor_pagar);
	printf("\n- Valor a pagar - 10,00: %.2f", valor_pagar_desconto);
}
