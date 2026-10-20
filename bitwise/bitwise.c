#include <stdio.h>

int main()
{
    int a = 0b110110001;
    int b = 0b010100101;
    //      0b100010100
    //        2^8 + 2^4 + 2^2
    //        256 + 16 + 4
    //              276
    // XOR
    int y = a ^ b;
    printf("%d\n", y);

    // AND
    int c = a & b;
    (c == 1) ? printf("correct\n") : printf("wrong\n");

    // OR
    a = 0;
    c = a & b;
    (c == 0) ? printf("correct\n") : printf("wrong\n");
}
