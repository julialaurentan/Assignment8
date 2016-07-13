// Julia Tan
// sort.c

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
	int array_size;
	int *array_1;
	int *array_2;
	int *array_3;
	int i = 0;
	srand(time(0));
	printf("How many numbers do you want?\n");
	scanf("%d", &array_size);
	array_1 = (int *)malloc(sizeof(int)*array_size);
	array_2 = (int *)malloc(sizeof(int)*array_size);
	array_3 = (int *)malloc(sizeof(int)*array_size);
	
	// check if there is enough memory
	if ((array_1 = (int *)malloc(sizeof(int)*array_size)) == NULL)
		printf("array_1 cannot be allocated memory.");
	if ((array_1 = (int *)malloc(sizeof(int)*array_size)) == NULL)
		printf("array_2 cannot be allocated memory.");
	if ((array_1 = (int *)malloc(sizeof(int)*array_size)) == NULL)
		printf("array_3 cannot be allocated memory.");

	// add random numbers into arrays
	for (i = 0; i < array_size; i++){
		array_1[i] = rand();
		array_2[i] = array_1[i];
		array_3[i] = array_1[i];
		printf("array[%d] = %d\n", i, array_1[i]);
	}

	// sort numbers by ascending or descending
	for (i = 0; i < array_size; i++){
		for (int j = i + 1; j < array_size; j++){ //ascending
			if (array_2[j] < array_2[i]){
				int temp = array_2[i];
				array_2[i] = array_2[j];
				array_2[j] = temp;
			}
		}
	}
	for (i = 0; i < array_size; i++){
		for (int j = i + 1; j < array_size; j++){ //descending
			if (array_3[j] > array_3[i]){
				int temp = array_3[i];
				array_3[i] = array_3[j];
				array_3[j] = temp;
			}
		}
	}
	// print sorted array
	printf("First array, no sorting:\n");
	for (i = 0; i < array_size; i++){
		printf("%d\n",array_1[i]);
	}
	printf("Second array, ascending:\n");
	for (i = 0; i < array_size; i++){
		printf("%d\n", array_2[i]);
	}
	printf("Third array, descending:\n");
	for (i = 0; i < array_size; i++){
		printf("%d\n", array_3[i]);
	}

	free(array_1);
	free(array_2);
	free(array_3);
	printf("%d",'a');
	return 0;
}
