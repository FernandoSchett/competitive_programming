// Made by: Fernando Schettini Github: https://github.com/FernandoSchett
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	double x, x2, Vbandido, Vpolicia, dist;
	
	while(scanf(" %lf %lf %lf", &dist, &Vbandido, &Vpolicia) != EOF){
		
	
		
		dist = 144 + dist * dist;
		dist = sqrt(dist);
		   
		x = 12/ Vbandido; 
		x2 = dist / Vpolicia;
		
			//	printf("x1: %lf\n", x);
				//printf("x2: %lf\n", x2);

		if(x < x2){
			printf("N\n");	
		
		}else{
			printf("S\n");

		} 
		
	}
	
	
	return 0;
}
