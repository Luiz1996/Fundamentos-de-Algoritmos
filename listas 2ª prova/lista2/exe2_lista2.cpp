#include <stdio.h>

int cont = 1, x = 0;

int X(int n) {
	printf("%d\n", cont); cont++;
	if (n >= 0 && n <= 2) {
		x = n;
	} else {
		x = X(n-1) + X(n-2) + X(n-3);
	}
	return x;
}

int main(void){
	int n = 6;	
	
	X(n);
}

//utilizando esse código, podemos ver que executará 25x
