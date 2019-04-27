#include <stdio.h>
int x = 0, cont = 1;
int X(int n, int m){
	printf("%d\n", cont); cont++;
	if (n == m || n == 0) {
 		x = 1;
 	}else {
 		x = X(n-1, m) + X(n-1, m+1);
 	}
 	return x;
}

int main(void){
	int n = 5, m = 3, a = 0;	
	
	X(n, m);
}

//utilizando esse código, podemos ver que executará 19x
