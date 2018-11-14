#include <stdio.h>

int fetchDigit(int number, int n){
	int out, temp=number, counter=0;
	while (temp>1){
		counter++;
		temp /= 10;
	}

	if(counter < n){
		out = -1;
	}
	else
	{
		int i;
		for(i=1; i <=n; i++)
		{
			out = number % 10;
			number = number /10;
		}
	}

	return out;
}


int main(void){

	int num, n;
	scanf("%d %d", &num, &n);

	printf("%d", fetchDigit(num, n));

}
