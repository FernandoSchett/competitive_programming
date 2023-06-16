// Made by: Fernando Schettini Github: https://github.com/FernandoSchett
#include <stdio.h>
  
int main() {
	double valo, valo2;

	scanf(" %lf", &valo);
	scanf(" %lf", &valo2);
	valo = valo * 3.5;
	valo2 = valo2 * 7.5;
	valo = valo + valo2;
	valo = valo/11;
	printf("MEDIA = %.5lf\n", valo);
	
	return 0;
}
