
#include <stdio.h>

void divideWithRemainder(int x, int y, int *z, int *p){

	*z = x/y;
	*p = x % y;
}


int main(void){

	int x, y, result, remainder;
	scanf("%d %d", &x, &y);

	divideWithRemainder(x,y, &result, &remainder);
	printf("result: %d, remainder:%d \n", result, remainder);

}
