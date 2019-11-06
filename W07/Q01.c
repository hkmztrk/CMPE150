#include <stdio.h>
#include <stdlib.h>


int main(void) {

	int num, i, counter=0, fact_sum=0;
	scanf("%d", &num);


	while(num > 0){
		int lastdigit = num % 10;

		if(lastdigit %2 ==1){
			counter++;

			int fact = 1;
			for(i=2; i <= lastdigit; i++){
				fact *=i;

			}

			fact_sum += fact;
		}

		num = num / 10;
	}

	printf("odd num=%d, sum of factorials=%d", counter, fact_sum);

	return 0;
}



