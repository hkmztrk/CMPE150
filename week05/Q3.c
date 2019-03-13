
#include <stdio.h>
#include <stdlib.h>


int main(void) {

	int a, b;
	scanf("%d%d", &a, &b);

	while(1){
		if (a % 11 == 0)
			printf("%d ", a);

		a++;

		if(a > b)
			break;

	}


	return 0;
}
