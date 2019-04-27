#include <stdio.h>

int main(void){
	while (true){
	
		float max_prest, sal_bruto, valor_prest = 0;
		
		printf("Informe o seu salario bruto: ");
		scanf("%f", &sal_bruto);
		printf("Informe o valor da prestaca: ");
		scanf("%f", &valor_prest);
		
		max_prest = (sal_bruto/100)*30;
		
		if (valor_prest <= max_prest){
			printf("Parabens, seu emprestimo foi concedido com sucesso.\n\n");
		}else {
			printf("Infelizmente o emprestimo nao podera ser concedido! :(\n\n");
		}
	}
}

