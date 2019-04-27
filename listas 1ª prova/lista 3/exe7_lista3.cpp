#include <stdio.h>

int main(void){
	
	int habitante_a = 5000000, habitante_b = 7000000, meses = 0;
	
	while(habitante_a < habitante_b){
		//fazendo crescimento de natalidade mensal...
		habitante_a = habitante_a + (habitante_a * 0.00250000);
		habitante_b = habitante_b + (habitante_b * 0.00166669);
		meses++;
	}
	printf("Demorara no maximo %d meses...", meses);
}
