#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int N, sum=0, i;
	scanf("%d", &N);

	while(N > 0){
		int last_digit = N % 10;
		int factorial = 1;
		for(i=1; i <= last_digit; i++){
			factorial *=i;
		}
		sum += factorial;

		N /=10;
	}

	printf("%d", sum);

}
