#include <stdio.h>
#include <stdlib.h>


int power(int x, int y){
	int result = 1;
	int i=0;
	for(i = 0; i< y; i++){
		result *= x;
	}
	return result;
}

int reverse(int x, int y){
	int i,mod,sum = 0;
	for(i = 1; i <= y; i++){
		mod = x%10;
		x = x/10;
		sum += mod*power(10,y-i);
	}
	x = x*power(10,y);
	x += sum;
	return x;
}

int main(void) {
	int n,m;
	scanf ("%d%d", &n, &m);
	printf("%d",reverse(n,m));




	return 0;
}









