// Made by: Fernando Schettini Github: https://github.com/FernandoSchett
#include <stdio.h>
  
int main() {
	int B, A, C , D, E, F, G, H;
	scanf(" %d", &A);
	B = A / 365; // anos
	C = A % 365; 
	D = C % 30;
	C = C / 30; // meses
	printf("%d ano(s)\n", B);
	printf("%d mes(es)\n", C);
	printf("%d dia(s)\n", D);

    return 0;
}
