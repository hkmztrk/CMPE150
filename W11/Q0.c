#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n, m;
	scanf ("%i %i", &n, &m);
	int i, j;
  
	for(i = 0; i < n; i ++) {
		for(j = 0; j < m; j ++) {
			printf("%i ", i * m + j);
		}
		printf("\n");
	}
	return 0;
}
