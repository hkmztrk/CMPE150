/**
Write a program which reads an integer (smaller than 1000000) 
then prints out how many of the digits are odd numbers. 
**/


#include <stdio.h>


int main() {

	int a, f, counter=0;
	scanf("%d", &a);

	while(a != 0)
	{
		f = a %10;
		// printf("%d %d \n", a, f); // Debug

		if(f % 2 != 0)
			counter++;

		a /= 10;
	}

	printf("%d", counter);

	return 0;
}