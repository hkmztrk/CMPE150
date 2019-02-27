
#include <stdio.h>
#include <stdlib.h>


int main(void) {

	char a;
	scanf("%c", &a);

	if(a >= 'a' && a <= 'z'){
		printf("%c", a - ('a' - 'A'));
	}
	else if (a >= 'A' && a <= 'Z'){
		printf("%c", a + ('a' - 'A'));
	}



	return 0;
}
