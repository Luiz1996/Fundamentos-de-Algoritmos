#include <stdio.h>
#include <math.h>

#define GRATIFICACAO 5
#define IMPOSTO 7

int main(void){
	
	float sal_base, sal_novo;
	
	printf("Digite seu salario base: ");
	scanf("%f", &sal_base);
	
	sal_novo = (sal_base + ((sal_base/100) * GRATIFICACAO));
	sal_novo = (sal_novo - ((sal_novo/100) * IMPOSTO));
	
	printf("\nSeu novo salario liquido R$ %.2f .", sal_novo);
}
