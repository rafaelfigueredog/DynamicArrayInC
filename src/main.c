#include "array.h"
#include <stdio.h>

int main() {
    Array arr;
    init(&arr);

    // add values 
    for (int i = 1; i <= 20; i++) 
        append(&arr, i);

    // set values
    set(&arr, 0, 10);
    set(&arr, 1, 11);
    set(&arr, 2, 13);

    // Iterate over the array, get and print values.
    for (int i = 0; i < arr.size; i++) 
        printf("%d ", get(&arr, i));
    printf("\n"); 

    // cleanup array
    cleanup(&arr); 

    return 0;
}