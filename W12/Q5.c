#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i, j, n, m;
	scanf("%i %i ", &n, &m);
	char string1[n + 1], string2[n + 1];
	for (i = 0; i < n; i ++) {
		scanf("%c", &string1[i]);
	}
	string1[n] = '\0';

	scanf(" ");

	for (i = 0; i < m; i ++) {
		scanf("%c", &string2[i]);
	}
	string2[m] = '\0';

	int count = 0;
	for (i = 0; i <= n - m; i ++) {
		count = count + 1;
		for (j = 0; j < m; j ++) {
			if (string1[i + j] != string2[j]) {
				count = count - 1;
				break;
			}
		}
	}

	printf("%i", count);
	return 0;
}
