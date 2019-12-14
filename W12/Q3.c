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
	char duplicated[n + sum + 1];
	for (i = 0; string[i] != '\0'; i ++) {
		if (string[i] != c) {
			duplicated[j] = string[i];
			j = j + 1;
		}
		else {
			duplicated[j] = string[i];
			duplicated[j + 1] = string[i];
			j = j + 2;
		}
	}
	duplicated[n + sum] = '\0';

	for (i = 0; duplicated[i] != '\0'; i ++) {
		printf("%c", duplicated[i]);
	}

	printf("\n%i", n + sum);
	return 0;
}
