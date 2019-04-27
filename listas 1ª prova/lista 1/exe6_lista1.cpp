#include <stdio.h>
#include <math.h>

#define PI 3.14159265359
int main(void){

	float raio, altura, volume = 0;
	
	printf("Digite o raio(cm)..: ");
	scanf("%f", &raio);
	printf("Digite o altura(cm): ");
	scanf("%f", &altura);
	
	volume = ((PI*pow(raio,2))*altura); 
	
	printf("\nO volume eh.: %.2f", volume);
}
