#include <stdio.h>
#include <stdlib.h>

void func(int n, int m, int numbers[n][m], int a, int b) {
	int j;
	for(j = 0; j < m; j ++) {
		int temp = numbers[a][j];
		numbers[a][j] = numbers[b][j];
		numbers[b][j] = temp;
	}
}

int main(void) {
	int n, m, a, b;
	scanf ("%i %i %i %i", &n, &m, &a, &b);
	int i, j;

	int numbers[n][m];
	for(i = 0; i < n; i ++) {
		for(j = 0; j < m; j ++) {
			scanf("%i", &numbers[i][j]);
		}
	}

	func(n, m, numbers, a, b);

	for(i = 0; i < n; i ++) {
		for(j = 0; j < m; j ++) {
			printf("%i ", numbers[i][j]);
		}
		printf("\n");
	}
	return 0;
}
