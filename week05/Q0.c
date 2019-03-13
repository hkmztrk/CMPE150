
#include <stdio.h>
#include <stdlib.h>


int main(void) {

	int a, b, i, mul=1;
	scanf("%d%d", &a, &b);

	for(i=0; i < b; i++){
		mul *= a;
	}

	printf("%d",mul);

	return 0;
}
