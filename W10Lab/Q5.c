#include <stdio.h>
#include <stdlib.h>

int func(int n, int numbers[], int *most) {

	int i;
	int counter = 0;
	int max = 0;

	for (i = 0; i < n - 1; i ++) {
		if (numbers[i] == numbers[i + 1]) {
			counter = counter + 1;
      // With >, you will find and return the first maximum occurence if the array contains more than one maximum occurences.
      // Change it to >= to find and return last maximum occurence.
			if (counter > max) { 
				max = counter;
				*most = numbers[i];
			}
		}
		else {
			counter = 0;
		}
	}

	return max + 1;
}

int main(void) {

	int n, i;

	scanf("%i", &n);

	int numbers[n];

	for (i = 0; i < n; i ++) {
		scanf("%i", &numbers[i]);
	}

	int most = 0;

	int max = func(n, numbers, &most);

	printf("%i times %i", max, most);

	return 0;
}
