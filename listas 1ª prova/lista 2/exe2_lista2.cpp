#include <stdio.h>

int main(void){
	
	int ano;
	
	printf("Entre com um ano (4 digitos): ");
	scanf("%d", &ano);
	
	if((ano % 4 == 0 && ano % 100 != 0) || (ano % 100 == 0 && ano % 400 == 0)){
		printf("EH BISSEXTO!!!");
	} else {
		printf("NAO EH BISSEXTO!!!");
	}
	
}
