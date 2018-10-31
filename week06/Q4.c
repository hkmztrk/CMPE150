
/*
Write a program which reads two integers N and M (both smaller than 15, greater than 
1) then prints a rectangle with size NxM which has stars (*) at borders, and lines (-) inside.

*/

#include <stdio.h>


int main() {


	int N, M, temp1, temp2;
	scanf("%d %d", &N, &M);
	temp1 = M;
	temp2 = N;
	if( (M <15 && M > 1) && (N <15 && N > 1))
	{
		while(N !=0)
		{
			while(M!=0)
			{
				if (N==temp2 || N==1 || M==temp1 || M==1)
					printf("*");
				else
					printf("-");
				M--;
			}
			printf("\n");
			M = temp1;
			N--;
		}
	}
	else
		printf("wrong entry!");






	return 0;
}



	int m, n, i, j;

	scanf("%d %d", &m, &n);

	for (i=1; i <= m; i++){
		for (j=1; j <=n; j++){
				if(i==1 || i==m)
					printf("*");
				else if(j==1 || j==n)
					printf("*");
				else
					printf("-");
		}
		printf("\n");
	}
