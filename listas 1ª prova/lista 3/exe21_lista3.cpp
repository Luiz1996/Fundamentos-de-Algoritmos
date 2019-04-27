#include <stdio.h>
#define MIN 10
#define MAX 1100
#define TRUE 1
#define FALSE 0

int confirma_goldbach(int);
int e_primo(int);
int mostra_goldbach(int, int, int);

int main(){
	int num = 0;
    register int i;
	
	while(num < 4){//tratativa para aceitar apenas valores maiores que 3.
		printf("Digite um numero: ");
		scanf("%d", &num);
	}
    
	for(i = num; i <= num; i += 2){
        if(confirma_goldbach(i))
            continue;
    }


return 0;
}

int confirma_goldbach(int num){

    register int i, j = 2;

    for(i = 2; i + j <= num; i++){
        if(e_primo(i))
            for(j = 2; j < num; j++){
                if(e_primo(j)){
                    if(mostra_goldbach(i, j, num))
                        return TRUE;
                }
            }
            j = 2;
    }

return FALSE;
}

int e_primo(int num_teste){

    register int i, cont_div;

    cont_div = num_teste == 1 ? 1 : 2;

    for(i = 2; i <= num_teste / 2; i++){
        if(num_teste % i == 0){
            cont_div++;
            break;
        }
    }

return (cont_div == 2 ? TRUE : FALSE);
}

int mostra_goldbach(int primo1, int primo2, int num_teste){

    if(primo1 + primo2 == num_teste){
        printf("\n%d + %d = %d.", primo1, primo2, num_teste);
        return TRUE;
    }
    else{
        return FALSE;
    }
}
