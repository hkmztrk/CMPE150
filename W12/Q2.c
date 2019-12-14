#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i, n;
	char c;
	scanf("%i %c ", &n, &c);
	char string[n + 1];
	for (i = 0; i < n; i ++) {
		scanf("%c", &string[i]);
	}
	string[n] = '\0';

	int sum = 0;
	for (i = 0; string[i] != '\0'; i ++) {
		if (string[i] == c) {
			sum = sum + 1;
		}
	}

	int j;
	char deleted[n - sum + 1];
	for (i = 0; string[i] != '\0'; i ++) {
		if (string[i] != c) {
			deleted[j] = string[i];
			j = j + 1;
		}
	}
	deleted[n - sum] = '\0';

	for (i = 0; deleted[i] != '\0'; i ++) {
		printf("%c", deleted[i]);
	}

	printf("\n%i", n - sum);
	return 0;
}
