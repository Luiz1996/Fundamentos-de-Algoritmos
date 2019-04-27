#include <stdio.h>

#define GRAV_TERRA 9.8
#define MERCURIO 0.38
#define VENUS 0.90
#define MARTE 0.38
#define JUPTER 2.53
#define SATURNO 1.06
#define URANO 0.88
#define NETUNO 1.13

int main(void){
	
	float massa_pessoa, novo_peso = 0;
	int planeta = 0;
	
	printf("Insira a sua massa na Terra: ");
	scanf("%f", &massa_pessoa);
	printf("1 - Mercurio\n2 - Venus\n3 - Marte\n4 - Jupter\n5 - Saturno\n6 - Urano\n7 - Netuno\nEscolha um planeta: ");
	scanf("%d", &planeta);
	
	//daria para fazer usando switch case tbm :) mas vou usar ifs e else ifs
	if(planeta == 1){
		novo_peso = massa_pessoa*GRAV_TERRA*MERCURIO;
		printf("\nO peso em newtons no planeta Mercurio eh: %.2fN", novo_peso);
	}else if(planeta == 2){
		novo_peso = massa_pessoa*GRAV_TERRA*VENUS;
		printf("\nO peso em newtons no planeta Venus eh: %.2fN", novo_peso);
	}else if(planeta == 3){
		novo_peso = massa_pessoa*GRAV_TERRA*MARTE;
		printf("\nO peso em newtons no planeta Marte eh: %.2fN", novo_peso);
	}else if(planeta == 4){
		novo_peso = massa_pessoa*GRAV_TERRA*JUPTER;
		printf("\nO peso em newtons no planeta Jupter eh: %.2fN", novo_peso);
	}else if(planeta == 5){
		novo_peso = massa_pessoa*GRAV_TERRA*SATURNO;
		printf("\nO peso em newtons no planeta Saturno eh: %.2fN", novo_peso);
	}else if(planeta == 6){
		novo_peso = massa_pessoa*GRAV_TERRA*URANO;
		printf("\nO peso em newtons no planeta Urano eh: %.2fN", novo_peso);
	}else if(planeta == 7){
		novo_peso = massa_pessoa*GRAV_TERRA*NETUNO;
		printf("\nO peso em newtons no planeta Netuno eh: %.2fN", novo_peso);
	}
}
