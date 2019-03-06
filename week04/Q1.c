
#include <stdio.h>
#include <stdlib.h>


int main(void) {

	float f1, f2;
	char operator;
	scanf("%f%c%f", &f1, &operator, &f2);

	switch(operator){

	case   '+':
		printf("%.2f", f1 + f2);
		break;
	case '-':
		printf("%.2f", f1 - f2);
		break;
	case   '*':
		printf("%.2f", f1 * f2);
		break;
	case '/':
		printf("%.2f", f1 / f2);
		break;

	}



	return 0;
}
