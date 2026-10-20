#include <stdio.h> 
#include <stdlib.h>
#include <stdbool.h>

typedef struct vector {
    int *data;
    size_t size;
    size_t capacity;
} vector;

size_t size(const vector* self) { return self->size; }
size_t capacity(const vector* self) { return self->capacity; }
bool empty(const vector* self) { return self->size == 0; }
bool _is_at_capacity(const vector* self) { return self->size == self->capacity; }
