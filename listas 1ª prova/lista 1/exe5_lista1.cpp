#include <stdio.h>
#include <math.h>

#define PI 3.14159265359
int main(void){

	float raio, diametro, area, perimetro = 0;
	
	printf("Digite o raio(cm): ");
	scanf("%f", &raio);
	
	diametro  = 2*raio;
	area      = PI*(pow(raio,2));
	perimetro = ((2*PI)*raio); 
	
	printf("\nO diametro eh.: %.2f", diametro);
	printf("\nA area eh.....: %.2f", area);
	printf("\nO perimetro eh: %.2f", perimetro);
}
