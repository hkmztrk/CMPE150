#include <stdio.h>

/* NOTE: global variables have value of 0
 * at the initialization.
 *
 *  int a;
 *  e.g. if you print a in main() you will see 0 output.
 */


int main(void){

	/* local variables defined in a function have indeterminate  values*/
	 int N, prev=10000000, next;
	 /* we assigned a possible max number to prev*/

	 printf("%d \n", N);
	 scanf("%d", &N);

	 while(N!=-1){

		 scanf("%d",&next);

		 if(N > prev && N > next)
			 printf("%d ", N);

		 prev = N;
		 N = next;
	 }

return 0;
}
