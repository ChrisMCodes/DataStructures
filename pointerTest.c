#include <stdio.h>
#include <stdlib.h>

void main() {

	int a = 10; // stack
	int *p = &a; // pointer to address on stack

	printf("%d\n", *p); // dereferenced pointer to see value. Expected: 10

	/* Now for some heap fun */
	int *p2 = (int*)malloc(sizeof(int)); // heap
        *p2 = 12;
	printf("%d\n", *p2); // dereferenced pointer to see value. Expected: 10

	free(p2);

}