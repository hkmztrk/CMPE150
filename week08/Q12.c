/*
 * lab2.c
 *
 *  Created on: 3 Eki 2018
 *      Author: Hakimee
 */

#include <stdio.h>

char isPerfect(int num){
	int j, result=0;
	char flag = 'f';

	for (j=1; j<num; j++){
		 if(num % j ==0 ){
			 result += j;
		 }
	}

	if(result == num){
		flag = 't';
	}

	return flag;
}


int main(void){

	int num;
	scanf("%d", &num);

	printf("%c", isPerfect(num));




}
