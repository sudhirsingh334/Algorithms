#include <stdio.h>
#include "Helper.h"


void insertionSort(int array[], int size) {
//for i --> 0 to n-1, i++
int n=size;
for (int i=0; i<n;i++) {
	//for j --> i to 1(>0), j--
/*
	for(int j=i; j>0;j--) {
		// compare array[j] & array[j-1]
		//if array[j] < array[j-1] --> Swap
		if (array[j] < array[j-1]) {
			//Swap
			int temp = array[j];
			array[j] = array[j-1];
			array[j-1] = temp;
		} else {
			//Previuos sub array is already sorted
			break;
		}
	}
	*/

	int j=i;

	while (array[j-1]>array[j]) {
		//swap
		int temp = array[j];
			array[j] = array[j-1];
			array[j-1] = temp;
		j--;

		if (j==0) {
			break;
		}
	}

}

}


int main() {
	int array[] = {3,5,1,6,9,4,7,2,8}; // ==> {1,2,3,4,5,6,7,8,9}

	int size = sizeof(array)/sizeof(array[0]);
	insertionSort(array, size);
	printA(array, size);
return 0;
}
