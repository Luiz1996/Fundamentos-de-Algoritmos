#include <stdio.h>

int main(void){
	
	int a, b, c = 0;
	
	printf("Informe o tamanho do lado A: ");
	scanf("%d", &a);
	
	printf("Informe o tamanho do lado B: ");
	scanf("%d", &b);
	
	printf("Informe o tamanho do lado C: ");
	scanf("%d", &c);
	
	if ((a < b+c)&&(b < a+c)&&(c < a+b)){
		if((a == b)&&(b == c)){
			printf("\nTriangulo Equilatero.");
		}else if((a != b)&&(b != c)&&(c != a)){
			printf("\nTriangulo Escaleno.");			
		}else{
			printf("\nTriangulo Isoceles.");
		}
	}else {
		printf("\nNAO EH UM TRIANGULO.");
	}
}
