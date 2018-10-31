/*
* Write a program to read a sequence of integers until a negative value is entered 
* and print their average (float).

*/


#include <stdio.h>


int main() {

	int sum=0, n, count = 0;
	float avg;
	scanf("%d", &n);
	while (n >= 0) {
	sum += n;
	count += 1;
	scanf("%d", &n);
	}
	avg = (count) ? (float) sum/count : 0;

	printf("%.2f", avg);



	return 0;
}
