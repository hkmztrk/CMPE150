#include <stdio.h>
#include <stdlib.h>


void removeDigit(int *p, int x){
	int i;

	for(i=1; i<=x; i++){
		*p /=10;
	}

}

int main(void){

	int a = 12453;
	removeDigit(&a,3);
	printf("%d", a );


	return 0;
}