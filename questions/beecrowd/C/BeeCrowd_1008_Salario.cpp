// Made by: Fernando Schettini Github: https://github.com/FernandoSchett

#include <stdio.h>

int main() {
	int valo; 
	double valo2, valo3; 
 
 	scanf(" %d", &valo);
 	scanf(" %lf", &valo2);
 	scanf(" %lf", &valo3);
	valo2 = valo2 * valo3;
	printf("NUMBER = %d\n", valo);
	printf("SALARY = U$ %.2lf\n", valo2);
  
    return 0;
}
