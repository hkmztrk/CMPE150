#include <stdio.h>
#include <stdlib.h>

int fetchDigit(int num, int N){

	int counter = 0;

	while(num > 0){
		int lastdigit = num %10;
		counter ++;

		if (counter == N){
			return lastdigit;
		}
		num /=10;
	}

	if(N > counter)
		return -1;
}


int main(){
	int number, N;
	scanf("%d%d", &number, &N );

	printf("%d", fetchDigit(number, N));
	return 0;
}
