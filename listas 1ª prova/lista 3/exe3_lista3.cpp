#include <stdio.h>

int main(void){
	float altura = 0, altura_maior = 0, altura_menor = 999.99, media_altura_mulheres = 0, alturas_mulheres = 0;
	int qtde_homens = 0, qtde_mulheres = 0;
	char sexo, sexo_pessoa_mais_alta;
	
	for(int i = 1; i <= 15; i++){
		printf("\n\nQual sua altura em metros? ");
		scanf("%f", &altura);
		fflush(stdin); // limpar o buffer-lixo
		printf("Qual seu sexo [M/F]? ");
		scanf("%c", &sexo);
		
		if(altura > altura_maior){
			altura_maior = altura;
			sexo_pessoa_mais_alta = sexo;
		}else if(altura <= altura_menor){
			altura_menor = altura;
		}
		
		if(sexo == 'f' or sexo == 'F'){
			alturas_mulheres += altura;
			qtde_mulheres++;
		}else if(sexo == 'm' or sexo == 'M'){
			qtde_homens++;
		}
		
	}
	
	if(altura_menor >= altura_maior){
		altura_menor = altura_maior;
	}
	
	if(qtde_mulheres == 0){
		media_altura_mulheres = 0;
	}else{
		media_altura_mulheres = alturas_mulheres / qtde_mulheres;
	}
	
	printf("\na) Maior altura: %.2f e menor altura: %.2f", altura_maior, altura_menor);
	printf("\nb) Media de altura das mulheres: %.2f", media_altura_mulheres);
	printf("\nc) Quantidade de homens: %d", qtde_homens);
	printf("\nd) Sexo da pessoa mais alta: %c", sexo_pessoa_mais_alta);
}
