#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(void) {

	int a, b;
	scanf("%d %d", &a, &b);

	if(a <0)
		a *= -1;

	// Solution 1
    if(a%b == 0){
        printf("%d", a+b);
    }else{
        printf("%d", a*b);
    }

    // Solution 2
    /* Alternative to if-else: ternary approach
	int res = (a % b==0)? a+b:a*b;
	printf("%d", res);
	*/
	return 0;
}
