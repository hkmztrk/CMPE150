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
#define RANDINT(a,b) ( rand() % ((b)-(a)+1) + (a) )

#define MAX(a,b)  ( (a > b)? (a) : (b))
#define SIZE 10


int main(void){

 int i, arr[10]={0};
 int max=-1000000, min=1000000;
 int num;

 for(i=0; i<10; i++){
	 scanf("%d", &num);
	 arr[i] = num;
 }

 for(i=0; i<10; i++){
	 if(arr[i] > max)
	 {
		 max = arr[i];
	 }

	 if(arr[i] < min){
		 min = arr[i];
	 }
 }

 printf("max:%d, min:%d", max, min);


	return 0;
}
