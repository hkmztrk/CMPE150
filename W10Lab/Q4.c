#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int n, i;

	scanf("%i", &n);

	int numbers[n];

	for (i = 0; i < n; i ++) {
		scanf("%i", &numbers[i]);
	}

	int mask[3];

	for (i = 0; i < 3; i ++) {
		scanf("%i", &mask[i]);
	}

	for (i = 0; i < n; i ++) {
		int point = 0;
		if (i - 1 >= 0) {
			point = point + numbers[i - 1] * mask[0];
		}
		point = point + numbers[i] * mask[1];
		if (i + 1 < n) {
			point = point + numbers[i + 1] * mask[2];
		}
		printf("%i ", point);
	}

	return 0;
}
