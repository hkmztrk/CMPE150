#include <stdio.h>
#include <stdlib.h>


int main(void) {

	int a;
	scanf("%d", &a);

	if (a % 2 == 0){
		printf("even");
	}
	else{
		printf("odd");
	}

	/* 

	Alternative Solution:

	
	int a;
	scanf("%d", &a);

	if (a % 2){ // this returns TRUE in case of a % 2 == 1
		printf("odd");
	}
	else{
		printf("even");
	}
	*/


	return 0;
}
