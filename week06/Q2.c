#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int N, M, i,j;
	scanf("%d%d", &N, &M);

	for(i=1; i <= N; i++){
		for(j=1; j <= M; j++){
			if(i==1 || i==N || j==1 || j==M)
				printf("*");
			else
				printf("-");
		}
		printf("\n");
	}

}
