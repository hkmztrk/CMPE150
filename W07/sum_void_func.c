#include <stdio.h>
#include <stdlib.h>

void toplama(float a, float b); // this is a prototype


int main(void) {

	int num1, num2;
	scanf("%d%d", &num1, &num2);

	toplama(num1, num2);

	return 0;
}

void toplama(float a, float b){
	printf("%f", a + b);
}








