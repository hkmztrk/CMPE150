#include <stdio.h>


int main() {

	char ch = 'c';

	while (ch <= 'p'){
		if( ch == 'e' || ch == 'i' || ch=='o'){
			ch++;
			continue;
		}
		printf("%c ",ch++);

	}

	return 0;
}
