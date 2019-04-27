#include <stdio.h>

int main(void){
	float resultado = 1;
	int num = 2;
	
	while(num <= 50){
		
		if(num % 2 == 0){
			resultado -= 1.0 / num;
		}else if(num % 2 != 0){
			resultado += 1.0 / num;
		}
		num++;
	}
	printf("Resultado: %.3f .", resultado);
}
