// Made by Fernando Schettini
// Github: https://github.com/FernandoSchett
#include <stdio.h>


int main(){
	int thor,tmin,i, hor1,hor2,min1,min2,trocoudia; 
	
	scanf(" %d %d %d %d", &hor1, &min1, &hor2, &min2); 
	thor = 0;
	
	if(hor1 == hor2){
		if(hor1 == hor2 && min1 == min2){
			thor = 24;
			tmin = 0;
		}else{
			if(min1 < min2){ //min1 MENOR que min2
				thor = 0;
				tmin = min2 - min1;
			}else{ //min1 MAIOR que min2
				thor = 23;
				tmin = 60 - min1;
				tmin = tmin + min2;
			}
		}
		
	}else{
		hor1++;
		i = hor1;
		trocoudia = 0;
		while(i != hor2){
			i++;
			if(i == 24){
				thor = i - hor1;
				i = 0;
				trocoudia = 1;
			}
			printf("i = %d thor = %d\n", i, thor);
		}
		if(trocoudia == 0 ){
			i = i - hor1;		
		}
		thor = thor + i;
	
			

		printf("i = %d, thor = %d\n", i, thor);

		tmin = 60 - min1;
		tmin = tmin + min2;
	}


	printf("tmin = %d\n", tmin);
	
	while(tmin >=60 ){
		tmin = tmin - 60;
		thor = thor +1;
	}	
	
	
	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", thor, tmin);
	
	return 0;
}
