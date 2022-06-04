// Made by: Fernando Schettini Github: https://github.com/FernandoSchett
#include <stdio.h>
  
int main() {
	int B, A, C , D, E, F, G, H ;
	
	scanf(" %d", &A);
	B = A % 60; // segundos
	C = A / 60;
	C = C % 60; // minutos
	D = A / 3600; // horas 
	printf("%d:%d:%d\n", D, C, B);
    
	return 0;
}
