// Made by: Fernando Schettini Github: https://github.com/FernandoSchett
#include <stdio.h>

int main(){
    int x, y, i, soma = 0;
    int inicio, fim;    
    
    scanf(" %d %d", &x, &y);
    
    if(x < y){
        inicio = x;
        fim = y;     
    } 
    else{
        inicio = y;
        fim = x;
    }
    
    for(i = inicio; i <= fim; i++){
        if(!(i % 13 == 0)){
        	soma = soma + i;
    	}
    }
    
    printf("%d\n", soma);

    return 0;
}
