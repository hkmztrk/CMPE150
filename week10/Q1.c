#include <stdio.h>
#include <stdlib.h>
#define RANDINT(a,b) ( rand() % ((b)-(a)+1) + (a) )
#define SIZE 20

int main()
{
	
	int randarray[SIZE];

	for(int i=0; i<SIZE; i++)
		randarray[i] = RANDINT(1,5);
	// Display values
	for(int i=0; i<SIZE; i++)
		printf("Element %d is %d\n", i, randarray[i]);
}