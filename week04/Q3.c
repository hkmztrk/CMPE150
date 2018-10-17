
/*
/*
Write a program that will take 2 numbers from the user and 
if the first number is divisible by the second number, your code should print "it is divisible", 
if it is not divisible, then print "it is not divisible". 
If one of your numbers is nonpositive, print "Incorrect input" 


	input: 45 5 	output: it is divisible 
	input:45 6 		output: it is not divisible 
	input:-34 17 	output: Incorrect input 

*/

#include <stdio.h>

int main(void){

	int num1, num2;

	scanf("%d %d", &num1, &num2);

	if(num1 >= 0)
	{
		if(num1 % num2 == 0)
			printf("it is divisible.");
		else
			printf("it is not divisible.");
	}
	else
		printf("Incorrect input.");

	return 0;
}


