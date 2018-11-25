#include <stdio.h>
#include <stdlib.h>


void digitCount(int num, int * digitNum){
	int counter =0;
	while(num >0){
		counter++;
		num /= 10;
	}
	*digitNum = counter;
}


int main()
{
	int n, digitno=0;
	scanf("%d", &n);

	digitCount(n, &digitno);

	printf("%d", digitno);
}


