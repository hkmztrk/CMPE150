#include <stdio.h>

int main()
{

	int p1, p2, p3;

	scanf("%d %d %d", &p1, &p2,&p3);

	int oldest = (p1>p2) ? p1 : p2;
	oldest = (oldest > p3) ? oldest : p3;

	int youngest = (p1 < p2) ? p1: p2;
	youngest = (youngest < p3) ? youngest : p3;

	printf("Oldest %d, Youngest %d", oldest, youngest );



	return 0;
}