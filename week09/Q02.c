#include <stdio.h>
#include <stdlib.h>


void dividewithRemainder(int num, int num2, int *a, int *b){
	*a = num / num2;
	*b = num % num2;

}


int main(){

	int a, b, c, d;
	scanf("%d%d", &a, &b);
	dividewithRemainder(a, b, &c, &d);
	printf("%d %d", c, d );

	return 0;
}
