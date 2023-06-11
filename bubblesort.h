#include "helpers.h"

void bubbleSort(int *arr, int arrLength) {
    for(int n = 0; n < arrLength - 1; n++) {
        for(int i = 1; i < arrLength; i++) {
            if(arr[i] < arr[i-1]) {
                swap(&arr[i], &arr[i-1]);
            }
        }
    }
}