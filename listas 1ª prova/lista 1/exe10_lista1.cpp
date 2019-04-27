#include <stdio.h>

int main(void){
	
	while(true){
		
		float valor_produto, desconto, valor_total;
		
		printf("Digite o valor do produto em R$: ");
		scanf("%f", &valor_produto);
		
		printf("Digite a porcentagem de desconto [%%]: "); // escapando o sinal de %
		scanf("%f", &desconto);
		
		valor_total = (valor_produto-((valor_produto/100)*desconto));
		
		printf("\nO novo valor do produto eh: %.2f\n\n", valor_total);
	}
}
