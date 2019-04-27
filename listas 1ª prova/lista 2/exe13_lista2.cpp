#include <stdio.h>

 int main(void){
	while(true){
		int pH = 0;
	 	
	 	printf("Forneca a concentracao de ions H+ presentes numa solucao qualquer: ");
	 	scanf("%d", &pH);
	 	
	 	switch (pH){
	 		case 1:
	 			printf("\npH acido!\n\n");
	 			break;
	 			
	 		case 2:
	 			printf("\npH acido!\n\n");
	 			break;
	 		
	 		case 3:
	 			printf("\npH acido!\n\n");
	 			break;
	 			
	 		case 4:
	 			printf("\npH acido!\n\n");
	 			break;
	 			
	 		case 5:
	 			printf("\npH acido!\n\n");
	 			break;
	 			
	 		case 6:
	 			printf("\npH acido!\n\n");
	 			break;
	 			
	 		case 7:
	 			printf("\npH NEUTRO!\n\n");
	 			break;
	 			
	 		case 8:
	 			printf("\npH basico!\n\n");
	 			break;
	 			
	 		case 9:
	 			printf("\npH basico!\n\n");
	 			break;
	 			
	 		case 10:
	 			printf("\npH basico!\n\n");
	 			break;
	 			
	 		case 11:
	 			printf("\npH basico!\n\n");
	 			break;
	 			
	 		case 12:
	 			printf("\npH basico!\n\n");
	 			break;
	 			
	 		case 13:
	 			printf("\npH basico!\n\n");
	 			break;
	 			
	 		default :
	 			printf("\nConcentracao invalida, tente novamente!\n\n");
	 			break;
		}
	}
}
