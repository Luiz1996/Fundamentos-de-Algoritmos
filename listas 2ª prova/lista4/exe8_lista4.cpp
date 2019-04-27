#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int ver_palindromo(char *str, char *res){
	if(strcmp(str, res) == 0)
		return 1;

	return 0;
}

int main(void){
	while(true){
		char inicial[100], resultado[100], parcial[100];
		int j = 0, retorno = 0;

		printf("String: ");
		scanf("%[^\n]s", inicial);

		/*retirar espacos da inicial[]*/
		for(unsigned int i = 0; i < strlen(inicial); i++){
			if(inicial[i] != ' '){
				parcial[j] = inicial[i];
				j++;
			}
		}
		parcial[j] = '\0';/*finalizando string parcial[]*/
		j = 0;/*reinicializando a variavel j para ser reutilizada no laço abaixo*/

		/*passando parcial[] invertido para a resultado[]*/
		for(int i = (strlen(parcial) - 1); i >= 0; i--){
			resultado[j] = parcial[i];
			j++;
			resultado[j] = '\0';
		}
		
		fflush(stdin);/*limpando bufer do stdin:teclado*/
		system("cls");/*limpando a tela*/
		retorno = ver_palindromo(parcial, resultado); /*chamada da função que retornara 1 ou 0*/
		if(retorno == 1){
			printf("A string \"%s\" EH UM PALINDROMO.\n", inicial);
		}else if(retorno == 0){
			printf("A string \"%s\" NAO EH UM PALINDROMO.\n", inicial);
		}
		for(int i = 0; i < 120; i++) printf("-");
	}
}