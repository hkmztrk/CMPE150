#include <stdio.h>
#include <stdlib.h>


int main(void) {

	 char ch1, ch2;
	 scanf("%c %c", &ch1, &ch2);

	 int mul = (ch1 - '0') * (ch2 - '0'); // here we subtract the ASCII of '0' from the ASCII of ch1 and ch2 
	 									// e.g. ASCII '0' : 48, ASCII '5' : 53,  '5' - '0' = 5 AND 53 - 48 = 5
	 printf("%d", mul);


	return 0;
}



