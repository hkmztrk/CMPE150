#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int n, i;

	scanf("%i", &n);

	int numbers[n];

	for (i = 0; i < n; i ++) {
		scanf("%i", &numbers[i]);
	}

	int reversed[n];

	for (i = n - 1; i >= 0; i --) {
		reversed[n - i - 1] = numbers[i];
	}

	for (i = 0; i < n; i ++) {
		printf("%i ", reversed[i]);
	}

	printf("\n");
  
  // You may read an additional number such is k to replace 3.
  for (i = 0; i < n; i = i + 3) {
		printf("%i ", reversed[i]);
	}
  
  /*
	for (i = 0; i < n; i ++) {
		if (i % 3 == 0) { 
			printf("%i ", reversed[i]);
		}
	}
  */

	return 0;
}
