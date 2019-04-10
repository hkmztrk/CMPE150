#include <stdio.h>
#include <stdlib.h>


void swapbyval(int p1, int p2){
	int temp = p1;
	p1 = p2;
	p2 = temp;

	printf("Swapped inside function, p1:%d p2:%d \n", p1, p2);
	/* here swap is active only in this function
	 * locally
	 */

}

void swapbyref(int *p1, int *p2){
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;

}

int main(){

	int a, b;
	scanf("%d%d", &a, &b);

	printf("Before swapbyval: a:%d b:%d \n", a,b);
	swapbyval(a, b);
	printf("After swapbyval: a:%d b:%d \n", a,b);
	swapbyref(&a, &b);
	printf("After swapbyref: a:%d b:%d \n", a,b);

	return 0;
}
