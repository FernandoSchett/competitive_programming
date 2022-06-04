// Made by: Fernando Schettini Github: https://github.com/FernandoSchett
#include <stdio.h>
    #include <stdlib.h>
    #include <math.h>



    int main(){
        long long int soldados;
		int casos;
        double delta;

        scanf(" %d", &casos);

        while(casos){

            scanf(" %lld", &soldados);

            delta = sqrt(8*soldados + 1);

            delta = (- 1 + delta) / 2;

            delta = floor(delta);
            printf("%.0lf\n", delta);
            casos--;
        }

        return 0;
    }
