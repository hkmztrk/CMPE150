/*
Print a lower case character's position in alphabet:

	input: a
	output:1  

	input: d
	output:4  
*/

#include <stdio.h>

int main(void){

	char ch;
	scanf("%c", &ch);

	printf("position of %c is %d", ch, (ch - 'a') + 1);


	return 0;
}
