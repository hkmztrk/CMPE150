
/*
Read one character as input.

Check if it is a digit
   +If so, convert it to an integer and display twice that number
   +o/w display an error message

input: 9
output: 18

input: a
output: error*/


#include <stdio.h>

int main(void){

	char ch; int num;

	scanf("%c", &ch);
	if (('0'<=ch) && (ch<='9')) {
		num=ch-'0';
		printf("Twice input is %d \n", 2*num);
	}
	else
		printf("Input is not a digit! \n");
}


