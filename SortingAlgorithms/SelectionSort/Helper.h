#include <stdio.h>

void printA(int array[], int size);

void printA(int array[], int size) {
    printf("{");
    for (int i=0; i<size;i++) {
        printf("%d",array[i]);
        if (i<size-1) {
            printf(", ");
        }
    }
    printf("}\n");
}
