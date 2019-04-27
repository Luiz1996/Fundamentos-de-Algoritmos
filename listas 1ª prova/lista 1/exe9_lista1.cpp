#include <stdio.h>
#include <math.h>

int main(void){
	while(true){
	
		int x_p1 = 0;
		int y_p1 = 0;
		int x_p2 = 0;
		int y_p2 = 0;
		float distancia_p1_p2 = 0;
		
		printf("Entre com a coordenada X do P1: ");
		scanf("%d", &x_p1);
		printf("Entre com a coordenada Y do P1: ");
		scanf("%d", &y_p1);
		printf("Entre com a coordenada X do P2: ");
		scanf("%d", &x_p2);
		printf("Entre com a coordenada Y do P2: ");
		scanf("%d", &y_p2);
		
		distancia_p1_p2 = sqrt(pow((x_p2-x_p1),2) + pow((y_p2-y_p1),2));
		
		printf("\nA distancia entre P1(%d,%d) e P2(%d,%d) eh: %.2f u.m.\n------------------------------------\n", x_p1, y_p1, x_p2, y_p2, distancia_p1_p2);
	}
}
