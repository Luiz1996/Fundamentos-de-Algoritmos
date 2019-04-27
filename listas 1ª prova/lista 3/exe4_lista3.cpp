#include <stdio.h>

int main(void){
	float Celsius = 0;
	int contador = 20;
	
	while(contador <= 80){
		Celsius = (contador - 32.0) * (5.0 / 9.0);
		printf("Fahrenheit: %d.00 | Celsius: %.2f \n", contador, Celsius);
		contador++;
	}
}
