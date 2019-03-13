
#include <stdio.h>
#include <stdlib.h>


int main(void) {

	int num1, num2;
	scanf("%d%d", &num1, &num2);

	if (num1 > 0 && num2 >0){
		if(num1%num2==0){
			printf("divisible");
		}
		else{
			printf("not divisible");
		}
	}
	else{
		printf("incorrect input");
	}

	return 0;
}
