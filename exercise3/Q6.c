/*
 ============================================================================
 Name        : Tester.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int power(int num, int pow){
  int i, res=1;
  for ( i=1; i <=pow; i++)
	  res *= num;

  return res;
}
int reverseDigits(int num, int n){
	int i, digitNum=0, minus=0, plus=0;
	int temp=num;

	for(i=1; i <= n; i++){

		if(num == 0)
		{
			return -1;
		}
		int f = num%10;
		digitNum++;

		minus += (power(10, digitNum-1) *f);
		plus += (power(10, n-digitNum) *f);

		num /=10;

	}
	num = temp;

	return (num - minus + plus);
}

int main(void){


	printf("%d", reverseDigits(176,2));


	return 0;
}
