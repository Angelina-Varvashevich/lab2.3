#include "functions.h"
#include <cmath>

int minElement(int* arr, int size ) {
    int min_element = arr[0];
    for (int i = 0; i < size; i++) {
        if (abs(arr[i]) < abs(min_element)) {
            min_element = arr[i];
        }
    }
    return min_element;
}

int sumAfterLastNull (int size, int* arr ){
    int sum = 0;
    int ch = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == 0) {
            ch++;
        }
    }
    if (ch > 0) {
        for (int i = size - 1; i >= 0 && abs(arr[i]) > 0; i--) {
            sum += arr[i];
        }
    }
    return sum;
}

