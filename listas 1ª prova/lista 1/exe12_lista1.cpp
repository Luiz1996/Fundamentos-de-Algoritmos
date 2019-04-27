#include <stdio.h>
#include <math.h>

#define PI 3.14159265359
int main(void){
	
	double grau = 0.0;
	double seno = 0.0;
	double coss = 0.0;
	double tang = 0.0;
	double secn = 0.0;
	double cosc = 0.0;
	double cotg = 0.0;
	
	printf("Forneca o grau do angulo: ");
	scanf("%lf", &grau);
	
	seno = sin(grau*PI/180);
	coss = cos(grau*PI/180);
	tang = tan(grau*PI/180);
	secn = 1 / coss;
	cosc = 1 / seno;
	cotg = coss / seno;

	printf("\nSeno......: %.2lf",seno);
	printf("\nSecante...: %.2lf",secn);
	printf("\nCosseno...: %.2lf",coss);
	printf("\nCossecante: %.2lf",cosc);
	printf("\nTangente..: %.2lf",tang);
	printf("\nCotangente: %.2lf\n",cotg);
}
