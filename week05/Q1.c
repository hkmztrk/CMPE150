	
/* Write a program that displays characters from 'c' to 'p'.

output: c d e f g h i j k l m n o p */


#include <stdio.h>


int main() {

	char ch = 'c';

	while (ch <= 'p'){
		printf("%c ",ch++);
	}

	return 0;
}
