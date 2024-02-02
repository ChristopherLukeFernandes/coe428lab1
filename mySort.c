#include <stdio.h>
int mySort(int array[], unsigned int arrayLength){
	int temp, j;
	for (int i = 1; i < arrayLength; i++){
			j = i - 1;
			temp = array[i];
			while (j >= 0 && array[j] > temp){
				array[j + 1] = array[j];
				j--;
			}
			array[j + 1] = temp;
	}
	return (array);
}
