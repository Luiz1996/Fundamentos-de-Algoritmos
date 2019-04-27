#include <stdio.h>

int main(void){
    int horaInicio, minutoInicio, horaFim, minutoFim, tempo;
	
    printf("Digite A HORA de inicio do jogo..: ");
    scanf("%d", &horaInicio);
    printf("Digite O MINUTO de inicio do jogo: ");
    scanf("%d", &minutoInicio);

	printf("Digite A HORA do fim do jogo.....: ");
    scanf("%d", &horaFim);
    printf("Digite O MINUTO do fim do jogo...: ");
    scanf("%d", &minutoFim);
    
    if(horaInicio > horaFim){
        tempo =  1440 - (horaInicio*60 + minutoInicio);
        tempo += horaFim*60 + minutoFim;
    }else{
		tempo = (horaFim*60 + minutoFim) - (horaInicio*60 + minutoInicio);
	}
	
	printf("\nDuracao da Partidade/GAME: %dhr(s) e %dmin(s).", tempo/60, tempo%60);
}
