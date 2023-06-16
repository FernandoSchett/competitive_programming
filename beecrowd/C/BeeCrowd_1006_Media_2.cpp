// Made by: Fernando Schettini Github: https://github.com/FernandoSchett
#include <stdio.h>
  
int main() {
 	double valo, valo2, valo3;

	scanf(" %lf", &valo);
	scanf(" %lf", &valo2);
	scanf(" %lf", &valo3);
	valo = valo * 2;
	valo2 = valo2 * 3;
	valo3 = valo3 * 5;
	valo = valo + valo2 + valo3;
	valo = valo/10; 
	printf("MEDIA = %.1lf\n", valo);
    
	return 0;
}
