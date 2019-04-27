#include <stdio.h>
#include <math.h>

int main(void){
	float cateto_oposto, cateto_adjacente, hipotenusa;
	
	printf("Forneca o cateto oposto...: ");
	scanf("%f", &cateto_oposto);
	printf("Forneca o cateto adjacente: ");
	scanf("%f", &cateto_adjacente);
	
	hipotenusa = sqrt(pow(cateto_oposto,2) + pow(cateto_adjacente,2));
	
	printf("\nO valor da hipotenusa eh: %.2f", hipotenusa);
}
