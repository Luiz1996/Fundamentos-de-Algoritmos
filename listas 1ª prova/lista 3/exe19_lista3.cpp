#include <stdio.h>

int main(void){
	
	for(int num = 11; num <= 100; num++){
		int quoc = 1, resto = 0;
		
		if(num % 10 == 0){
			continue;
		}
		
		quoc = num / 10;
		
		if((num%quoc) == 0){
			printf("%d: nao termina em zero e %d e divisor de %d.\n", num, quoc, num);
		}
	}
}
