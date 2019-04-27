#include <stdio.h>

#define SAL_MINIMO 954.00 // dado retirado do google.com.br
int main(void){
	
	int num_pecas = 0;
	float comissao = 0, sal_bruto = 0;
	
	printf("Quantas pecas o operario fez por mes? R:");
	scanf("%d", &num_pecas);
	
	if(num_pecas <= 30){
		sal_bruto = SAL_MINIMO;
		printf("O funcionario fez %d pecas no mes, eh da classe 1 e recebera R$%.2f .", num_pecas, sal_bruto);
	}else if(num_pecas >= 31 && num_pecas <= 35){
		int pecas_a_mais = num_pecas - 30;
		sal_bruto = SAL_MINIMO + (pecas_a_mais*(SAL_MINIMO*0.03));
		printf("O funcionario fez %d pecas no mes, eh da classe 2 e recebera R$%.2f .", num_pecas, sal_bruto);
	}else if(num_pecas > 35){
		int pecas_a_mais = num_pecas - 30;
		sal_bruto = SAL_MINIMO + (pecas_a_mais*(SAL_MINIMO*0.05));
		printf("O funcionario fez %d pecas no mes, eh da classe 3 e recebera R$%.2f .", num_pecas, sal_bruto);
	}
}
