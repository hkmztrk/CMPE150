/*
  Write a program that add integers from 1 up to 100. 
*/


#include <stdio.h>


// todo: use of ++

int main() {

	int limit = 100, n = 1;
	int sum = 0; 
	while (n <= limit) {
	sum += n; 
	n += 1;
	}
	printf("%d\n",sum);

	return 0;
}
