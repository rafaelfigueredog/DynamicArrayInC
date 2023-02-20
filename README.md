# Dynamic Array Implementation
This is an implementation of a dynamic array in C. A dynamic array is an array whose size can be changed during runtime.

## Usage
The Array struct is used to represent the dynamic array, and the following functions are provided for manipulating it:

- `void init(Array *arr)`: Initializes an empty dynamic array.
- `void append(Array *arr, int value)`: Appends the given value to the end of the array.
- `int get(Array *arr, int index)`: Returns the value at the given index of the array.
- `void set(Array *arr, int index, int value)`: Sets the value at the given index of the array to the given value.
- `int getSize(const Array* arr)`: Returns the current size of the array.
- `void cleanup(Array *arr)`: Frees the memory used by the array.


To use the dynamic array, first declare an Array variable and initialize it using the init function. Then, you can append, get, and set values in the array using the corresponding functions. Finally, when you are done using the array, you should call the cleanup function to free the memory used by the array.

Here's an example usage of the dynamic array:

~~~C
#include "array.h"
#include <stdio.h>

int main() {
    Array arr;
    init(&arr);

    append(&arr, 1);
    append(&arr, 2);
    append(&arr, 3);

    for (int i = 0; i < getSize(&arr); i++) {
      printf("%d ", get(&arr, i));
    }

    printf("\n");

    set(&arr, 1, 4);

    for (int i = 0; i < getSize(&arr); i++) {
      printf("%d ", get(&arr, i));
    }

    printf("\n");

    cleanup(&arr);
~~~

This program creates an empty dynamic array using the `init` function, appends the values 1, 2, and 3 to the array using the `append` function, prints out the contents of the array using a loop and the `get` function, sets the value at index 1 to 4 using the `set` function, prints out the contents of the array again, and then frees the memory used by the array using the `cleanup` function.

# Implementation Details

The dynamic array implementation uses a struct to store the elements of the array, the size of the array, and the capacity of the array. The initial capacity of the array is set to 10, and the capacity is doubled whenever the array is full and a new element needs to be appended. The `realloc` function is used to resize the array's memory block when the capacity needs to be increased.

The dynamic array is designed to be efficient for appending elements, as it only needs to resize the memory block occasionally. However, inserting or deleting elements in the middle of the array can be expensive, as it requires shifting all the subsequent elements over by one position.

Overall, the dynamic array implementation provides a flexible and efficient data structure for managing collections of elements in C.
