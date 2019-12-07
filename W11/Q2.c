#include <stdio.h>
#include <stdlib.h>

int func(int n, int m, int numbers[n][m], int k) {
	return numbers[k / m][k % m];
}

int main(void) {
	int n, m, k;
	scanf ("%i %i %i", &n, &m, &k);
	int i, j;

	int numbers[n][m];
	for(i = 0; i < n; i ++) {
		for(j = 0; j < m; j ++) {
			scanf("%i", &numbers[i][j]);
		}
	}

	printf("%i", func(n, m, numbers, k));
	return 0;
}
