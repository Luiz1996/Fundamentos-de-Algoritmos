#include <stdio.h>

#define ESCRITURARIO 0.5
#define SECRETARIO 0.35
#define CAIXA 0.2
#define GERENTE 0.1
#define DIRETOR 0.0

int main(void){
	while(true){
	
		int cargo = 0;
		float salario, novo_sal, aumento;
		
		printf("Entre com o codigo do seu cargo: ");
		scanf("%d", &cargo);
		printf("Forneca a nos o seu salario....: ");
		scanf("%f", &salario);
		
		switch (cargo){
			case 1:
				aumento = salario*ESCRITURARIO;		
				novo_sal = salario + aumento;
				printf("O seu cargo e ESCRITURARIO, houve um aumento de R$%.2f e seu novo salario e de R$%.2f .\n\n", aumento, novo_sal);
				break;
			case 2:
				aumento = salario*SECRETARIO;		
				novo_sal = salario + aumento;
				printf("O seu cargo e SECRETARIO, houve um aumento de R$%.2f e seu novo salario e de R$%.2f .\n\n", aumento, novo_sal);
				break;
			case 3:
				aumento = salario*CAIXA;		
				novo_sal = salario + aumento;
				printf("O seu cargo e CAIXA, houve um aumento de R$%.2f e seu novo salario e de R$%.2f .\n\n", aumento, novo_sal);
				break;
			case 4:
				aumento = salario*GERENTE;		
				novo_sal = salario + aumento;
				printf("O seu cargo e GERENTE, houve um aumento de R$%.2f e seu novo salario e de R$%.2f .\n\n", aumento, novo_sal);
				break;
			case 5:
				aumento = salario*DIRETOR;		
				novo_sal = salario + aumento;
				printf("O seu cargo e DIRETOR, houve um aumento de R$%.2f e seu novo salario e de R$%.2f .\n\n", aumento, novo_sal);
				break;
		}
	}
}
