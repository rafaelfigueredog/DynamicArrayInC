#ifndef ARRAY_H
#define ARRAY_H

typedef struct {
  int* elements;
  int size;
  int capacity;
} Array;

void init(Array *arr);
void append(Array *arr, int value);
int get(Array *arr, int index);
void set(Array *arr, int index, int value);
int getSize(const Array* arr);
void cleanup(Array *arr);

#endif /* ARRAY_H */