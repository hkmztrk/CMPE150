#include <stdio.h>

int main(){

	//int dif = 'A' - 'a'; this gives us the constant difference between a lower case
	//printf("%d", dif);   and upper case character in ASCII numbers
	                       // we can use any pair to find this difference. e.g. 'X' - 'x'


	char ch;
	scanf("%c", &ch);

	printf("%c, %d", ch - ('f'-'F'));

	return 0;
}
