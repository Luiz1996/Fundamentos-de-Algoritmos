#include <stdio.h>
#include <math.h>

int main(){
	
	float Celsius = 0;
	
	printf("Digite o grau em Celsius: ");
	scanf("%f", &Celsius);
	
	float Fahrenheit = (160+(9*Celsius))/5;
	float Kelvin = Celsius+273.15;
	
	printf("\nCelsius...: %.2f graus.", Celsius);
	printf("\nFahrenheit: %.2f graus.", Fahrenheit);
	printf("\nKelvin....: %.2f graus.", Kelvin);
}
