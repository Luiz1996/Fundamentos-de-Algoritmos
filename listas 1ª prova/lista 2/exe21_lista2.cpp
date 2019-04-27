#include <stdio.h>

int main(void){
	int qtde_maior_42, qtde_42, qtde_40;
	float salario, comissao, inss, imp_IR;
	
	printf("CALCULADORA SALARIO VENDEDOR:");
	printf("\nQual seu salario fixo? R:");
	scanf("%f", &salario);
	printf("Quantidade TV > 42\".....: "); 
	scanf("%d", &qtde_maior_42);
	
	printf("Quantidade TV = 42\".....: "); 
	scanf("%d", &qtde_42);
	
	printf("Quantidade TV <= 40\"....: "); 
	scanf("%d", &qtde_40);
	
	//CALCULANDO COMISSAO.
	if(qtde_maior_42 > 0){
		comissao += qtde_maior_42 * 170.00;
	}
	
	if(qtde_42 <= 10){
		comissao += qtde_42 * 100.00;
	}
	
	if(qtde_42 > 10){
		comissao += qtde_42 * 150.00;
	}
	
	if(qtde_40 <= 20){
		comissao += qtde_40 * 50.00;
	}
	
	if( qtde_40 > 20){
		comissao += qtde_40 * 120.00;
	}
	
	salario += comissao;
	inss += salario * 0.1;
	
	//CALCULANDO DESCONTOS DE IMPOSTO DE RENDA.
	if(salario >= 1787.78 && salario <= 2679.29){
		imp_IR = salario * 0.075;
	}else if(salario >= 2679.30 && salario <= 3572.43){
		imp_IR = salario * 0.15;
	}else if(salario >= 3572.44 && salario <= 4463.81){
		imp_IR = salario * 0.225;
	}else if(salario > 4463.81){
		imp_IR = salario * 0.275;
	}
	
	printf("\na) Comissao.: R$%.2f .\n", comissao);
	printf("b) Sal.Bruto: R$%.2f .\n", salario);
	printf("c) INSS: R$%.2f .Imposto de Renda: R$%.2f .\n", inss, imp_IR);
	printf("d) Total de descontos: R$%.2f .\n", inss+imp_IR);
	printf("e) Salario liquido: R$%.2f .", (salario-(inss+imp_IR)));
}
