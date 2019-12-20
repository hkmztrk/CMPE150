#include <stdio.h>
#include <stdlib.h>

struct player {
	char id[4];
	int size;
	int year;
};

int func(int n, int a1, int a2, int b1, int b2, struct player players[n]) {
	int i;
	int count = 0;
	for (i = 0; i < n; i ++) {
		if (players[i].size <= a1 && players[i].size >= a2 && players[i].year <= b1 && players[i].year >= b2) {
			printf("%s\n", players[i].id);
			count = count + 1;
		}
	}
	return count;
}

int main(void) {
	int n, i, a1, a2, b1, b2;
	scanf("%i %i %i %i %i", &n, &a1, &a2, &b1, &b2);

	struct player players[n];

	for (i = 0; i < n; i ++) {
		scanf("%s %i %i", &players[i].id, &players[i].size, &players[i].year);
	}
	/*
	for (i = 0; i < n; i ++) {
		printf("%s %i %i\n", players[i].id, players[i].size, players[i].year);
	}
	 */

	printf("%i", func(n, a1, a2, b1, b2, players));
	return 0;
}
