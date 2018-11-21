
#include <stdio.h>

int cubeByValue(int n);
void cubeByReference(int *n);
/* this is called function prototype
 * so that we can define our functions after main function
 * without any problems */

/* if we don't use function prototypes
 * then we have to define functions before main function
 * as we usually did. */


int main(void){

	int p = 3;
	int t = cubeByValue(p);

	printf("p: %d, t:%d", p, t);

	cubeByReference(&p);

	printf("p: %d, t:%d", p, t);


}

/* We are passing a value, pass by value */
int cubeByValue(int n){
    return n * n * n;
}


/* We are passing an address of a value, pass by value */
void cubeByReference(int *n){
    *n = *n * *n * *n;
}
