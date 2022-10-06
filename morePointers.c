#include <stdlib.h>
#include <stdio.h>

int main()
{
    int A[5] = {2, 4, 6, 8, 10};
    int *p;
    p = A;

    // accessing an array with and without a pointer
    for (int i = 0; i < (sizeof(A) / sizeof(int)); i++)
    {
        printf("Direct: %d\n", A[i]);
        printf("Pointer: %d\n", p[i]);
    }

    // now with a pointer instead of an array
    int *q;
    q = (int *)malloc(5 * sizeof(int));

    // 10, 15, 20, 25, 30
    for (int j = 0; j < 5; j++)
    {
        q[j] = j * 5 + 10;
    }

    for (int k = 0; k < 5; k++)
    {
        printf("Pointer accessing pointer: %d\n", q[k]);
    }

    // deallocating
    free(q);

    return 0;
}