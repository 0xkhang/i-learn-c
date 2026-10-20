#include <stdio.h>

int main() {
    size_t n = 5;
    int A[5] = {1,2,3,4,5};   

    // traditional way of going through an array
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);          
    }

    int *ptr_A = A;
    printf("\n");

    // using pointer arithmetic
    for (size_t i = 0; i < n; i++) {
        printf("%d ", *(ptr_A));
        ptr_A++;
    }

    printf("\n");
}