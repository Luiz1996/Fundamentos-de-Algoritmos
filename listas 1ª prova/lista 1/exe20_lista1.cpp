#include <stdio.h>

int main(void){
	
	float salario, aumento, perc_aumento, novo_sal;
	
	printf("Digite o valor do seu salario.....: ");
	scanf("%f", &salario);
	
	printf("Digite o percentual de aumento [%%]: ");
	scanf("%f", &perc_aumento);
	
	aumento  = (salario/100) * perc_aumento;
	novo_sal = salario + aumento;
	
	printf("\nO aumento foi de R$%.2f e o novo salario eh R$%.2f .", aumento, novo_sal);
}
