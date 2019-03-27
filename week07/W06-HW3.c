#include <stdio.h>
#include <stdlib.h>

int isPrime(int N){
	int i, flag=1;
	for(i=2; i<=N/2; i++){
		if(N %i ==0){
			flag =0;
			break;
		}

	}
	return flag;
}

int main(void)
{
	int number;
	scanf("%d", &number);

	printf("%d", isPrime(number));
}

