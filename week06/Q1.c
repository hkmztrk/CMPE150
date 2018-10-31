/*

Write a program that will take an integer N, then prints N! (N factorial). 
*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(void) {

 int N,sum=1, i=1;

 scanf("%d", &N);
/*
 for (i=1; i <= N; i++)
 {
	 sum *=i;
 }*/

 while(i <= N)
 {
	 sum *=i++;
 }

 printf("%d", sum);

}