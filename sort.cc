#include <iostream>
#include "helpers.h"
#include "bubblesort.h"

int main() {
    int arr[10] = {5, 6, 2, 4, 1, 4, 9, 8, 7, 3};
    printArray(arr, 10);
    bubbleSort(arr, 10);
    printArray(arr, 10);

    return 0;
}