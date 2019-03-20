#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int N, i,j;
	scanf("%d", &N);

	for(i=1; i <= N; i++){
		for(j=1; j < i; j++){
			printf(" ");
		}
		for(j=1; j < N-i+1; j++){
			printf("*");
		}
		printf("\n");
	}

}
