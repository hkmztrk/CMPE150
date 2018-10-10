
/*
Read an integer and tell if it is odd or even.

 input: 8
 output: even
*/

#include <stdio.h>

int main(void){
   int num;
   scanf("%d", &num);
	
   if (num%2!=0)
	printf("odd ");
   else
	printf("even ");
   printf("number.\n");
}
