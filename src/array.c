#include <stdlib.h>
#include "array.h"

#define INITIAL_CAPACITY 10

void init(Array *arr) {
  arr->size = 0;
  arr->capacity = INITIAL_CAPACITY;
  arr->elements = malloc(sizeof(int) * arr->capacity);
}

void append(Array *arr, int value) {
  if (arr->size >= arr->capacity) {
    // increase capacity if the array is full
    arr->capacity *= 2;
    arr->elements = realloc(arr->elements, sizeof(int) * arr->capacity);
  }
  arr->elements[arr->size] = value;
  arr->size++;
}

int get(Array *arr, int index) {
  if (index >= 0 && index < arr->size) {
    return arr->elements[index];
  }
  return -1; // return -1 to indicate an error
}

void set(Array *arr, int index, int value) {
  if (index >= 0 && index < arr->size) {
    arr->elements[index] = value;
  }
}

int getSize(const Array* arr) {
    return arr->size;
}

void cleanup(Array *arr) {
  free(arr->elements);
  arr->size = 0;
  arr->capacity = 0;
}