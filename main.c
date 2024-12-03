// main.c
// A program to input 5 integers from the user, find the minimum and maximum values using search_min and search_max functions, and print the results.
// The functions are declared in "search.h" and implemented in separate source files.

#include <stdio.h>
#include "search.h"

int main() {
    int numbers[5];
    int i;

    printf("Enter 5 integers:\n");
    for (i = 0; i < 5; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    int min = search_min(numbers, 5);
    int max = search_max(numbers, 5);

    printf("Minimum value: %d\n", min);
    printf("Maximum value: %d\n", max);

    return 0;
}