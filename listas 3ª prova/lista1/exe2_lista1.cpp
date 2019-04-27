#include <stdio.h>

typedef struct{
	int a;
	int b;
} N_IMGNR;

N_IMGNR soma(N_IMGNR primeiro, N_IMGNR segundo, N_IMGNR resultado){
	resultado.a = primeiro.a + segundo.a;
	resultado.b = primeiro.b + segundo.b;
	
	return resultado;
}

void imprime(N_IMGNR resultado){
	printf("\nResultado: %d + %di.", resultado.a, resultado.b);
}

int main(void){
	N_IMGNR primeiro, segundo, resultado;
	
	printf("Insira 'primeiro.a': ");
	scanf("%d", &primeiro.a);
	printf("Insira 'primeiro.b': ");
	scanf("%d", &primeiro.b);
	printf("\nInsira 'segundo.a': ");
	scanf("%d", &segundo.a);
	printf("Insira 'segundo.a': ");
	scanf("%d", &segundo.b);
	
	resultado = soma(primeiro, segundo, resultado);
	imprime(resultado);
}
