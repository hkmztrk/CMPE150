#include <stdio.h>
#include <stdlib.h>


void cubeByReference(int *n){
	*n = *n * *n * *n;
}

void swap(int *x, int *y){        // x = 3, y = 5
	*x = *x + *y;	          // x = 8, y = 5
	*y = *x - *y;	          // x = 8, y = 3
	*x = *x - *y;	          // x = 5, y = 3
}

void divideWithRemainder(int m, int n, int *result, int *remainder) {
	*result = m / n;
	*remainder = m - n * *result;
}

int main(void) {
	int m, n;
	scanf ("%i %i", &m, &n);
	cubeByReference(&m);
	printf("m: %i n: %i\n", m, n);
	swap(&m, &n);
	printf("m: %i n: %i\n", m, n);
	int result, remainder;
	divideWithRemainder(m, n, &result, &remainder);
	printf("result: %i remainder: %i", result, remainder);
	return 0;
}
