#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int n, i;

	scanf("%i", &n);

	int numbers[n];

	for (i = 0; i < n; i ++) {
		scanf("%i", &numbers[i]);
	}

	for (i = 0; i < n - 1; i ++) {
		int difference = numbers[i] - numbers[i + 1];
		if (difference < 0) {
			printf("%i ", -1 * difference);
		}
		else {
			printf("%i ", difference);
		}
	}

	return 0;
}
