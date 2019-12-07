#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n, m;
	scanf ("%i %i", &n, &m);
	int i, j;

	int numbers[n][m];
	for(i = 0; i < n; i ++) {
		for(j = 0; j < m; j ++) {
			scanf("%i", &numbers[i][j]);
		}
	}

	// Rows
	for(i = 0; i < n; i ++) {
		int sum = 0;
		for(j = 0; j < m; j ++) {
			sum = sum + numbers[i][j];
		}
		printf("%i ", sum);
	}

	printf("\n");

	// Columns
	for(j = 0; j < m; j ++) {
		int sum = 0;
		for(i = 0; i < n; i ++) {
			sum = sum + numbers[i][j];
		}
		printf("%i ", sum);
	}
	return 0;
}
