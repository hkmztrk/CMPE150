#include <stdio.h>
#include <stdlib.h>


int main(void) {

	int i=1;
	int a, b;
	scanf("%d%d", &a, &b);

	int res = 1;

	/*while( i <= b){

		res *= a;
		//printf("Iteration %d, res= %d \n",i, res);
		i++;
	}*/

	for(i=1; i <= b; i++){
		res *= a;
	}

	printf("%d", res);

	return 0;
}



