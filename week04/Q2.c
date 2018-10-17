/*
Write a basic calculator program (+, -, *, /) with if-else statements. 
 The program takes three inputs: float, char, float, then prints the result. 

 e.g.

  input: 1 + 45
  output: 46.0


  input: 1 - 45 
  output: -44.00 
*/

#include <stdio.h>

int main(void){

	float inp1, inp2, result;
	char op;

	scanf("%f %c %f",&inp1, &op, &inp2);
         /// spaces are important in scanf
	if(op == '+')
		result = inp1 + inp2;
	else if(op == '-')
		result = inp1 - inp2;
	else if(op == '/')
		result = inp1 / inp2;
	else if(op == '*')
		result = inp1 * inp2;

	printf("%f", result);

	return 0;
}
