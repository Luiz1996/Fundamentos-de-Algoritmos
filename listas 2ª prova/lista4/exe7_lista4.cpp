/*Escreva uma função que receba duas strings A e B por parâmetro e retorne verdadeiro se A é
uma substring de B. A é substring de B se a cadeia A ocorre em qualquer posição de B. Exemplo: A = rato; B = laboratorio.*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void sub_str(char *a, char *b){
	int j = 0, verifica = 2;

	for(int i = 0; i < strlen(b); i++){
		/*tratando casos triviais*/
		if(strlen(a) == 1 && strlen(b) == 1){
			if(a[0] != b[0])	
				verifica = 1;
		}

		if(strlen(a) > strlen(b)){
				verifica = 1;
		}

		/*tratando casos NAO triviais*/
		if(b[i] == a[j]){
			verifica = 0;
			for(j = 1; j < strlen(a); j++){
				if(a[j] == b[j+i]){
					continue;
				}else if(a[j] != b[j + i]){
					verifica = 1;
					j = 0;
					break;
				}
			}
		}
	}
	system("cls");/*limpa tela*/
	if(verifica != 0){
		printf("A string \"%s\" NAO EH SUBSTRING de \"%s\"\n", a, b);
	}else if(verifica == 0){
		printf("A string \"%s\" EH SUBSTRING de \"%s\"\n", a, b);
	}
	for(int i = 0; i < 120; i++) printf("-");
}

int main(void){
	while(true){/*loop infinito, para interromper: Ctrl+C*/
		char a[100], b[100];
		fflush(stdin);
		printf("String A: ");
		scanf("%[^\n]s", a);
		fflush(stdin);
		printf("String B: ");
		scanf("%[^\n]s", b);
	
		sub_str(a, b);
	}
}