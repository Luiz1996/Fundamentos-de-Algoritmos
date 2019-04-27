/*Faca um algoritmo que receba 10 valores reais e entao apresente a media e o desvio padrao
dos valores informados.*/
#include <stdio.h>
#include <math.h>

int main(void){
	float v[5] = {0.0}, aux[5] = {0.0}, soma = 0, media = 0, d_padrao = 0, variancia = 0;
	
	//carregando vetor
	for(int i = 0; i < 5; i++){
		printf("%do elemento do vetor: ", (i+1));
		scanf("%f", &v[i]);
		soma += v[i];
	} 
	
	//calculando media e variancia
	media = soma / 5;
	for(int i = 0; i < 5; i++){
		aux[i] = pow((v[i] - media), 2.0);
		variancia += aux[i] / 4.0;
	}
		
	d_padrao = sqrt(variancia);
	printf("\nMedia....: %.5f", media);
	printf("\nVariancia: %.5f", variancia);
	printf("\nD.Padrao.: %.5f", d_padrao);
}
