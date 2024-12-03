// search_max.c
// Implementation of the search_max function

#include "search.h"

int search_max(const int arr[], int size) {
    if (size <= 0) {
        return -1; // Return -1 for invalid size
    }

    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}