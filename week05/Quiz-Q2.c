#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(void) {

	char C;
	scanf("%c", &C);

	if(C >= '0' && C <= '9'){
		/*we extract the ASCII value of zero
		* from the ASCII value of C (which is a digit)
		* to convert the character into a number.*/
		printf("%d", (C-'0')*2);
	}
	else
	{
		int A;
		scanf("%d", &A);
		printf("%d", A*A);
	}
}
