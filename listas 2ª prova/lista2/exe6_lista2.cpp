#include <stdio.h>

void acha_mdc(int x, int y){
	if(y == 0){
		printf("\nO mdc eh: %d", x);
	}
	acha_mdc(y, x % y);
}

int main(void){
	int x = 0, y = 0;

	printf("Insira um numero X: ");
	scanf("%d", &x);
	printf("Insira um numero Y: ");
	scanf("%d", &y);

	if(x < y){
		int aux = y;
		y = x;
		x = aux;
	}

	acha_mdc(x, y);
}