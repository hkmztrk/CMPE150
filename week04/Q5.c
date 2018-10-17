
/*
Write a program with 'Switch Case' which takes a character as an input and prints:

	input: a OR A
	output: Plan A

	input: b OR B
	output: Plan B

	intput: others
	output: No Plan
*/


#include <stdio.h>

int main(void){

	char command;
	scanf("%c", &command);

	switch(command)
	{
	case 'a':
	case 'A':
		printf("Plan A\n");
		break;
	case 'b':
	case 'B':
		printf("Plan B\n");
	    break;  // break command to end the switch statement
	default :
		printf("I have no plans.\n");
	}

}


