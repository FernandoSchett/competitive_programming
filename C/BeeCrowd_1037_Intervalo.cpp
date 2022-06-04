// Made by: Fernando Schettini Github: https://github.com/FernandoSchett
#include <stdio.h>

int main() {
	double B, A, C , D, X, XX;
	
	scanf(" %lf", &A);
	
	if(A >= 0 && A <= 25){
		printf("Intervalo [0,25]\n");
	}	
	if(A > 25 && A <= 50){
		printf("Intervalo (25,50]\n");
	}
	if(A > 50 && A <= 75){
		printf("Intervalo (50,75]\n");
	}
	if(A > 75 && A <= 100){
		printf("Intervalo (75,100]\n");
	}
	if(A < 0 || A > 100){
		printf("Fora de intervalo\n");
	}

	return 0;
}



