#include <stdio.h>
#include <stdlib.h>


void cubeByReference(int *p){
	int num = *p;

	*p = num * num * num;
}

int main(){

	int z;
	scanf("%d", &z);

	printf("Before calling function: %d\n", z);

	cubeByReference(&z);

	printf("After calling function:  %d", z);

	return 0;
}
