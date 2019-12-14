#include <stdio.h>
#include <stdlib.h>

int func(char string[], int k, char c) {
	int i;
	int sum = 0;
	for (i = 0; string[i] != '\0'; i ++) {
		if (string[i] == c) {
			sum = sum + 1;
			string[i] = string[i] + k;
		}
	}
	return sum;
}

int main(void) {
	int i, n, k, result;
	char c;
	scanf("%i %i %c ", &n, &k, &c);
	char string[n + 1];
	for (i = 0; i < n; i ++) {
		scanf("%c", &string[i]);
	}
	string[n] = '\0';

	result = func(string, k, c);
	printf("%i\n", result);
	for (i = 0; string[i] != '\0'; i ++) {
		printf("%c", string[i]);
	}
	return 0;
}
