/*
    Fibonacci numbers are: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, .... 

    Each number is sum of the previous two numbers except the first two numbers 0 and 1 which are predefined.

Write a program which reads a positive integer number N (smaller than 50), and prints the N.th fibonacci number. 


| INPUT      | OUTPUT    |         
| ---------  |:---------:| 
| 1     | 0 | 
| 3     | 1 | 
| 7     | 8 | 
| 10     | 34 | 

*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(void) {

 int N, i, prev=0, next=1, sum=0;

 scanf("%d", &N);

 for (i=1; i < N; i++)
 {
	 printf("%d %d ", prev, next);
	 sum = prev + next;
	 prev = next;
	 next = sum;
	 printf("%d \n", sum);
 }

 printf("%d", prev);

}
