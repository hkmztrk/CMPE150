
#include <stdio.h>
#include <stdlib.h>

int main(void) {


	  int a, b;
	  scanf("%d %d", &a, &b);
	  /*
	  * it is important that you perform
	  * the operations after reading, a, b
	  * via scanf()
	  */

	  int sum = a + b;
	  int mul = a * b;
	  float quo = a / (float)b; // here we performed type conversion
	  int rem = a % b;

	  printf("sum = %d,  mul= %d, quo= %.1f, rem= %d", sum, mul, quo, rem );




	return 0;
}
