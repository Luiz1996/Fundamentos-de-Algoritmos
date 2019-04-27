#include <stdio.h>
#define tam 15

int main(void){
	int v[tam] = {0}, rep[tam + 1] = {}, contador[tam + 1] = {}, cont_v = 0, cont_imp_fim = 0;
	
	//carregando o vetor com valores do usuario
	for(int i = 0; i < tam; i++){
		printf("Digite um numero natural [>0]: ");
		scanf("%d", &v[i]);
		fflush(stdin);
		if(v[i] <= 0){
			printf("Valor invalido!\n\n");
			i--;
			continue;
		}
	}	
	for(int i = 0; i < 120; i++) printf("-");
	
	//manipulando v[i] e carregando vetores rep[i] e contador[i]
	for(int i = 0; i < tam; i++){
		int cont = 0;
		bool verifica = false;
		
		//calcula quantidade de repeticao
		for(int j = 0; j < tam; j++){
			if(v[i] == v[j]){
				cont++;
			}
		}
		
		//verificao para nao repetir a impressao de numeros iguais
		for(int k = 0; k < tam; k++){
			if(v[i] == rep[k]){
				verifica = true;
			}
		}
		
		//pulando a execucao do if debaixo para nao adicionar um numero a mais no rep[i] e contador[i]
		if(verifica){
			continue;
		}
		
		//adicionando dados aos vetores finais para a impressao ao finalizar tudo
		if (cont > 0){
			rep[cont_v] = v[i];
			contador[cont_v] = cont;
			cont_v++;
		}
	}
	
	//impressao dos vetores finais
	while ((rep[cont_imp_fim] != 0) && (contador[cont_imp_fim] != 0)){
		printf("O numero %d repetiu %d vezes.\n", rep[cont_imp_fim], contador[cont_imp_fim]);
		cont_imp_fim++;
	}
}
