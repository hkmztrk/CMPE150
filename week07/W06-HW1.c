#include <stdio.h>
#include <stdlib.h>



int main(void)
{
	int num, sum=0, counter=0;

	while(1){
		scanf("%d", &num);

		if(num % 2 == 1)
			break;

		sum +=num;
		counter++;
	}
	if (counter > 0)
		printf("%.1f", sum/counter*1.0);
	else
		printf("%.1f", 0);

	return 0;
}

