// Made by: Fernando Schettini Github: https://github.com/FernandoSchett
#include <stdio.h>

int main() {
	double valo;
	
	scanf(" %lf", &valo);
	valo = valo * valo * valo * 3.14159 * 4/3;
	printf("VOLUME = %.3lf\n", valo);
	
    return 0;
}
