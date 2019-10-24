#include <stdio.h>
#include <stdlib.h>


int main(void) {

	int num1, num2, result;
	char op1, op2;
	char choosen_op;
	scanf("%d%d %c %c", &num1, &num2, &op1, &op2);

	if (num1< 0 || num2 < 0){
		printf("incorrect input.");
	}
	else{
		/* here we decided which operator we will choose*/
		/* and then we saved that operator to a new variable*/
		if (num1 % num2 == 0){
			choosen_op = op1;
		}
		else{
			choosen_op = op2;
		}

		/*and now we can perform the math operations*/
		/* based on the value in choosen_op */

		if(choosen_op == '+'){
			result = num1 + num2;
		}
		else if (choosen_op == '-'){
			result = num1 - num2;
		}
		else if (choosen_op == '*'){
			result = num1 * num2;
		}
		else if (choosen_op == '/'){
			result = num1 / num2;
		}

		printf("%d", result);

	}


	return 0;
}



