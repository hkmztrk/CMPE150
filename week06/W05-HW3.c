#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int num;
	scanf("%d", &num);
	int num_odds = 0;
	while(num > 0){
		int last_digit = num % 10;
		if (last_digit % 2 == 1)
			num_odds++;

		num /= 10;
	}
	printf("%d", num_odds);
	return 0;
}
