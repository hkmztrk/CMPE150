#include <stdio.h>
#include <stdlib.h>


char toUpper(char ch){
	if(ch >= 'a' &&ch <= 'z')
		return ch - 32;
	else
		return ch;
}

int main(void)
{
	char ch;

	while(ch != '\n'){
		scanf("%c", &ch);
		printf("%c", toUpper(ch));
	}


	return 0;
}

