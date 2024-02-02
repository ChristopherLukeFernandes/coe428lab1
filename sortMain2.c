#include <stdio.h>
#include <stdlib.h>
#include "mySort.c"
int main(int argc, char * argv[]){
	int numSet[100000]; // Create array
	int numElements; // Create variable for array length
	if (argc > 1){ // Check is values were entered
		numElements = argc - 1;
		for (int i = 0; i < numElements; i++){
			numSet[i] = atoi(argv[i + 1]); // Converting entered numbers from ASCII to integers
		}
	}
	else { // If no values are entered the sorted hardcoded value will be displayed
			numElements = 4;
			numSet[0] = 25;
			numSet[1] = 50;
			numSet[2] = 75;
			numSet[3] = 100;
	}
	int numSetSort = mySort(numSet, numElements); // Sorts array

	// Check that all elements are sorted correctly
	for(int i = 0; i < numElements-1; i++) {
		if (numSet[i] > numSet[i+1]) {
			fprintf(stderr, "Sort error: data[%d] (= %d)" " should be <= data[%d] (= %d)- -aborting\n", i, numSet[i], i+1, numSet[i+1]); // Displays error if array is not sorted correctly
			exit(1);
		}
	}

	// Output sotred array
	for(int i = 0; i < numElements; i++) {
		printf("%d\n", numSet[i]);
	}
	exit(0);
} 
