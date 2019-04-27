/*Crie uma função que dados dois pontos ((x1; y1) e (x2; y2)) em um espaço bi-dimensional,
calcula a distância euclidiana entre esses dois pontos.*/
#include <stdio.h>
#include <math.h>

float distancia_2pontos(int xa, int ya, int xb, int yb){
	return sqrt(pow(xb-xa,2) + pow(yb-ya,2));
}

int main(void){
	int Xa, Ya, Xb, Yb;
	
	printf("Cordenada A(?,?): ");
	scanf("%d", &Xa);
	printf("Cordenada A(%d,?): ", Xa);
	scanf("%d", &Ya);
	printf("A(%d,%d)  e B(?,?): ", Xa, Ya);
	scanf("%d", &Xb);
	printf("A(%d,%d)  e B(%d,?): ",Xa, Ya, Xb);
	scanf("%d", &Yb);
	
	printf("\nA distancia de A(%d,%d) para B(%d,%d) eh: %.2f", Xa, Ya, Xb, Yb, distancia_2pontos(Xa, Ya, Xb, Yb));
}
