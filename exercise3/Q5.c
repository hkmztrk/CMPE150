/*
 ============================================================================
 Name        : Tester.c
 Author      :
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void printNums(int prev, int next){
	int i;
	if (prev - next >=0){
		for(i=prev; i>= next; i--)
			printf("%d ",i);
	}
	else{
		for(i=prev; i <= next; i++)
				printf("%d ",i);
	}
}

int main(void){

	int n,i;
	scanf("%d", &n);

	int prev, next;
	scanf("%d %d", &prev, &next);
	printNums(prev, next);


	for(i=1; i<=n-2; i++)
	{
		prev = next;
		scanf("%d",&next);
		if (prev - next >=0)
			printNums(prev-1, next);
		else
			printNums(prev+1, next);

	}


	return 0;
}
