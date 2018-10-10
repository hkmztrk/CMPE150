

/*
Write a code segment that detects whether a number is divisible by 6.

	input: 18
	output: yes

	input:19
	output: no
*/


#include <stdio.h>

int main(void){

   if ((num%2==0) && (num%3==0))
	printf("%d is divisible by 6 \n",num);
   else
	printf("%d is NOT divisible by 6 \n",num);   

	return 0;
}
