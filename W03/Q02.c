#include <stdio.h>
#include <stdlib.h>

#define PI 3.14159 //this is a constant variable 

int main(void) {

	int r;

	scanf("%d", &r);

	float cir = 2 * PI *r;
	float are = PI * r *r;

	printf("Cir = %.2f, Are= %.2f", cir, are);

	return 0;
}



