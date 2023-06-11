#include <stdio.h>
#ifndef HELPERS_H
#define HELPERS_H

void goTo(int x, int y) {
    printf("\x0b[%d;%dH", y, x);
}

void clearScreen() {
    printf("\x0b[2J");
}

void changeColor(int colourNumber) {
    printf("\x0b[38;5;%dm", colourNumber);
}

void printArray(int *arr, int arrLength) {
    for(int i = 0; i < arrLength; i++) {
        printf("%d, ", arr[i]);
    }
    printf("\n");
}

void swap(int *x, int *y) {
    int tmp = *x;
    *x = *y;
    *y = tmp;
}

#endif

