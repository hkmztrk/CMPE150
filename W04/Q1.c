#include <stdio.h>
#include <stdlib.h>


int main(void) {


	if (op == 1){ // == symbol asks whether two operands are equal or not
		printf("%d", num1+num2);
	}
	else if(op==2)
	{
		printf("%d", num1 - num2);
	}
	else if(op==3)
	{
		printf("%d", num1 * num2);
	}
	else if(op==4)
	{
		printf("%d", num1 / num2);
	}
	else{
		printf("error");
	}


	return 0;
}



