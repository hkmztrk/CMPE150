/*
 * lab2.c
 *
 *  Created on: 3 Eki 2018
 *      Author: Hakimee
 */

#include <stdio.h>

char factorial(int num){
	int j, result=1;

	for (j=1; j<=num; j++){
		result *=j;
	}

	return result;
}


int main(void){

	int num, sum_of_fact=0;
	scanf("%d", &num);


	while (num > 0){
		int f = num % 10;
		sum_of_fact += factorial(f);

		num /= 10;
	}

	printf("%d", sum_of_fact);

}
