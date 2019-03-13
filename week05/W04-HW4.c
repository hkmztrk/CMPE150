
#include <stdio.h>
#include <stdlib.h>


int main(void) {

	int num1, num2, num3;
	int max;
	scanf("%d %d %d", &num1, &num2, &num3);
	if(num1 > num2){ //if and else if works together. if num1 is already smaller than num2
		max = num1;   // in 'else if' we dont need to check again whether num2 > num1
	}
	else if (num2 > num3){
		max = num2;
	}

	if(num1 < num3 && num2 < num3){ 
		max = num3;
	}

	printf("%d", max);

	return 0;
}
