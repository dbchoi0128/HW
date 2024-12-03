// search_min.c
// Implementation of the search_min function

#include "search.h"

// Function to find the minimum value in an array
int search_min(const int arr[], int size) {
    if (size <= 0) {
        return -1; // Return -1 for invalid size
    }

    int min = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}
