#include <stdio.h>

int main(void){
	
	float diag_maior, diag_menor, area = 0;
	
	printf("Digite a DIAG.MENOR: ");
	scanf("%f", &diag_menor);
	printf("Digite a DIAG.MAIOR: ");
	scanf("%f", &diag_maior);
	
	area = ((diag_maior*diag_menor)/2);
	
	printf("\nA Area de seu losango eh: %.2f", area);
}
