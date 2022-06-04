// Made by: Fernando Schettini Github: https://github.com/FernandoSchett
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	double A, B, C,D;
	scanf(" %lf %lf  %lf %lf", &A, &B, &C, &D);
	A = A - C;
	B = B - D;
	A = A * A;
	B = B * B;
	A = A + B;
	A = sqrt(A);
	printf("%.4lf\n", A);

    return 0;
}
