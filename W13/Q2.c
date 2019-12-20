#include <stdio.h>
#include <stdlib.h>

struct item_pair {
	int price1;
	int price2;
	int budget;
};

int func(int n, struct item_pair items[n]) {
	int i;
	int counter = 0;
	for (i = 0; i < n; i ++) {
		if (items[i].budget >= items[i].price1 + items[i].price2) {
			counter = counter + 2;
			printf("Both items\n");
		}
		else if (items[i].budget >= items[i].price1) {
			counter = counter + 1;
			printf("Item 1\n");
		}
		else if (items[i].budget >= items[i].price2) {
			counter = counter + 1;
			printf("Item 2\n");
		}
		else {
			printf("No buy\n");
		}
	}

	return counter;
}

int main(void) {
	int n, i;
	scanf("%i ", &n);

	struct item_pair items[n];
	for (i = 0; i < n; i ++) {
		scanf("%i %i %i", &items[i].price1, &items[i].price2, &items[i].budget);
	}

	printf("%i", func(n, items));

	return 0;
}
