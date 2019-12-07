#include <stdio.h>
#include <stdlib.h>

void func(int n, int m, int numbers[n][m], int k) {
	int i, j;
	for(i = 0; i < n; i ++) {
		int border = (i + 1) * k;
		if (border > m) {
			border = m;
		}
		int sum = 0;
		for(j = 0; j < border; j ++) {
			printf("%i ", numbers[i][j]);
			sum = sum + numbers[i][j];
		}
		printf("%i\n", sum);
	}
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

	func(n, m, numbers, k);
	return 0;
}
