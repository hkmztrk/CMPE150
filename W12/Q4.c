#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i, n;
	scanf("%i ", &n);
	char string1[n + 1], string2[n + 1];
	for (i = 0; i < n; i ++) {
		scanf("%c", &string1[i]);
	}
	string1[n] = '\0';

	scanf(" "); // Not to count newline character \n.

	for (i = 0; i < n; i ++) {
		scanf("%c", &string2[i]);
	}
	string2[n] = '\0';

	int count = 0;
	for (i = 0; string1[i] != '\0'; i ++) {
		if (string1[i] == string2[i]) {
			count = count + 1;
		}
	}

	printf("%i", count);
	return 0;
}
