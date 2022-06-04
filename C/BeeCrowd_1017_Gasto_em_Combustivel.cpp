// Made by: Fernando Schettini Github: https://github.com/FernandoSchett

#include <stdio.h>
 
int main() {
	double A, B;
	
	scanf(" %lf %lf", &A, &B);
	A = A * B;
	A = A / 12;
	printf("%.3lf\n", A);
	
    return 0;
}
