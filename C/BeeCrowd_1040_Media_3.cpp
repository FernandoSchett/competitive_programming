// Made by: Fernando Schettini Github: https://github.com/FernandoSchett
#include <stdio.h>

int main() {
	int k;
	float n1, n2, n3, n4, n5, media;
	
	scanf(" %f %f %f %f", &n1, &n2, &n3, &n4);
	media = ((n1 * 2) + (n2* 3) + (n3* 4) + (n4 *1))/10;
 	printf("Media: %.1f\n", media);
	
	if(media >= 7){
		printf("Aluno aprovado.\n");
  	}
	if(media >= 5 && media <= 6.9){	
		printf("Aluno em exame.\n");	
		k = 1;
	}
	if(media < 5){
		printf("Aluno reprovado.\n");	
	}
	if(k == 1){ 
		scanf(" %f", &n5);
	 	printf("Nota do exame: %.1f\n", n5);
	 	media = (media + n5)/ 2; 
	    if(media >= 5){
	 		printf("Aluno aprovado.\n");
	 	}else{
	 		printf("Aluno reprovado.\n");
		}
 		printf("Media final: %.1f\n", media);
	}

    return 0;
}
