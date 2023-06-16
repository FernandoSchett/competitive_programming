// Made by: Fernando Schettini Github: https://github.com/FernandoSchett
#include <stdio.h>
  
int main() {
	int valo, valo2, valo3, valo4;

	scanf(" %d", &valo);
	scanf(" %d", &valo2);
	scanf(" %d", &valo3);
	scanf(" %d", &valo4);
	valo = valo * valo2 - valo3 * valo4;
	printf("DIFERENCA = %d\n", valo);
    
	return 0;
}
