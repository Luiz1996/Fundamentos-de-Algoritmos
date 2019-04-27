#include <stdio.h>

int main(void){
	
	float valor_hr = 0, sal_normal = 0, sal_extra = 0;
	int hr_semanal = 0;
	
	printf("Digite o valor da hora trabalhada: R$");
	scanf("%f", &valor_hr);
	printf("Quantidade de horas trabalhadas na semana: ");
	scanf("%d", &hr_semanal);
	
	if(hr_semanal > 40){
		sal_extra = ((valor_hr+(valor_hr*0.5))*(hr_semanal-40));
		sal_normal = 40*valor_hr;
		printf("O salario semanal e R$%.2f + salario extra R$%.2f = salario bruto R$%.2f .", sal_normal, sal_extra,(sal_normal+sal_extra));
	}else{
		sal_normal = hr_semanal*valor_hr;
		printf("O salario semanal e R$%.2f + salario extra R$%.2f = salario bruto R$%.2f .", sal_normal, sal_extra,(sal_normal+sal_extra));
	}
}
