#include <stdio.h>
#include <stdlib.h>

void insertionSort(int arr[], int n){
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
 
        // Move elements of arr[0..i-1], 
        // that are greater than key, to one
        // position ahead of their
        // current position
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main(){
	int vet[3], auxvet[3];
	
	scanf(" %d %d %d", &vet[0], &vet[1], &vet[2]);
	
	for(int i = 0; i != 3; i++){
		auxvet[i] = vet[i];
	}
	
	insertionSort(vet, 3);
	for(int i = 0; i != 3; i++){
		printf("%d\n", vet[i]);
	}
	printf("\n");
	
	for(int i = 0; i != 3; i++){
		printf("%d\n", auxvet[i]);
	}
	
	return 0;	
}
