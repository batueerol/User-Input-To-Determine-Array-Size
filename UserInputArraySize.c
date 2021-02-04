#include <stdlib.h>
#include <stdio.h>

void printArray(int *array, int size) {
    
    printf("["); 
    for (int i = 0; i < size - 1; i++) {  
        printf("%i, ", array[i]);
    }
    if (size >= 1) printf("%i", array[size-1]); 
    printf("]\n"); 
}
void multiply(int *array, int size){
	int product = 1;
	for(int i=0; i < size; i++){
		product = product * array[i];
	}
	printf("%d",product);
}

int main(void) {
    int count;
    printf("Enter the size of the array:\n");
    scanf("%d", &count);

    int *array;
   	array = (int *) malloc(sizeof(int) * count);
    if (!array) {
        printf("There was a problem with malloc.");
        exit(EXIT_FAILURE);
    }
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < count; i++) scanf("%d", &array[i]);
	
    printArray(array, count);
    multiply(array, count);


    free(array);
}

