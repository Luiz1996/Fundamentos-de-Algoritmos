#include <stdio.h>
#include <math.h>

int main(void){
	
	float deposito, juros, rendimento, valor_total;
	
	printf("Digite o valor do deposito a ser realizado: ");
	scanf("%f", &deposito);
	printf("Digite o valor do juros/rendimento em porcentagem[%%]: ");
	scanf("%f", &juros);
	
	rendimento = (deposito / 100) * juros;
	valor_total = deposito + rendimento;
	
	printf("\nO valor do rendimento foi de R$%.2f e o valor total apos 1 mes foi de R$%.2f .", rendimento, valor_total);
}
