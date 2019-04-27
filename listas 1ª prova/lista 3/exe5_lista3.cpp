#include <stdio.h>

int main(void){
	
	int ano_inicial, ano_final, morte_24meses, qtde_meninas = 0, qtde_meninos = 0, qtde_f_morte = 0, qtde_m_morte = 0;
	char sexo;
	float p_meninas, p_meninos;
	
	//consideraremos que todas criancas nasceram 01-01-2017.
	for(int cont = 1; cont <= 3; cont++){
		printf("Sexo da crianca [F]/[M]: ");
		scanf("%c", &sexo);
		fflush(stdin);
		printf("Ano de morte: ");
		scanf("%d", &ano_final);
		fflush(stdin);
		
		if(ano_final <= 2019){
			morte_24meses++;
		}
			
		if(sexo == 'f' or sexo == 'F'){
			qtde_meninas++;
			if(ano_final <= 2018){
				qtde_f_morte++;
			}
		}else if(sexo == 'm' or sexo == 'M'){
			qtde_meninos++;
			if(ano_final <= 2018){
				qtde_m_morte++;
			}
		}
		
	}
	
	p_meninas = (100.0/qtde_meninas)*qtde_f_morte;
	p_meninos = (100.0/qtde_meninos)*qtde_m_morte;

	printf("\na) R: %.2f", p_meninas);
	printf("\nb) R: %.2f", p_meninos);
	printf("\nc) R: %.2f", morte_24meses);
}
