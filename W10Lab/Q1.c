#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int n, i;

	scanf("%i", &n);

	int numbers[n];

	for (i = 0; i < n; i ++) {
		scanf("%i", &numbers[i]);
	}

	int sum = 0;

	for (i = 0; i < n; i ++) {
		sum = sum + numbers[i];
	}

	int average = sum / n;

	for (i = 0; i < n; i ++) {
		printf("%i ", numbers[i] * average);
	}

	printf("\n");

	for (i = 0; i < n; i ++) {
		printf("%i ", numbers[i] / average);
	}

	return 0;
}
