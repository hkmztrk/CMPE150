#include <stdio.h>
#include <stdlib.h>


int main(void)
{
   int prev = 0;
   int next = 1;
   int N, i, temp;

   scanf("%d", &N);

   for(i=1; i < N; i++){
	   temp = prev;
	   prev = next;
	   next += temp;
   }

   printf("%d", prev);

}
