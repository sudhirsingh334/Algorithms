#include <stdio.h>
#include "Helper.h"

void selectionSort(int array[], int size);
void print(int array[], int size);

int main()
{
    int array[] = {4,9,5,6,3,1,7,8,2,14,11,13,12,18,15,19,16,20,17};
    int n = sizeof(array)/sizeof(array[0]);
    printf("Unsorted Array: ");
    printA(array, n);
    printf("\nSorted Array: ");
    selectionSort(array, n);
    printA(array, n);
    return 0;
}


void selectionSort(int array[], int size) {
    int i,j,minIndex;
    
    for (i=0; i<size-1;i++) { //n-2 times
        minIndex = i;//c1
        for (j=i+1; j<size;j++) {//n-1,n-2,n-3,n-4...1 ==> n(n-1)/2 =
           if (array[j] < array[minIndex]) {
               minIndex = j;
           }
        }
        
        //swap minm number
        int temp = array[minIndex];
        array[minIndex] = array[i];
        array[i] = temp;
    }
}
