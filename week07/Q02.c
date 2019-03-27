#include <stdio.h>
#include <stdlib.h>

int factorial(int N); // this is a prototype
// we declare prototypes beforehand so that we can call them in functions
//e.g. sumOfFactorials

int sumOfFactorials(int num){
	int sum =0;
	while(num > 0){
		int last = num % 10;
		sum += factorial(last);

		num /= 10;
	}

	return sum;
}



int factorial(int N){
	int i,result =1;
	for(i=1; i<=N; i++)
		result *= i;
	return result;

}


int main(void)
{
	int N;
	scanf("%d", &N);
	printf("%d", sumOfFactorials(N));

	return 0;
}

