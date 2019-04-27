#include <stdio.h>

int main(void){

	float area, base, altura = 0;;
	
	printf("Digite a base:");
	scanf("%f", &base);
	
	printf("Digite a altura:");
	scanf("%f", &altura);
	
	area = base*altura;
	
	printf("A AREA eh: %.2f", area);
}
