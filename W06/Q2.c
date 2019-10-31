#include <stdio.h>
#include <stdlib.h>


int main(void) {


	char ch;
	scanf("%c", &ch);

	// Solution 1

	while(ch!='e' && ch!= 'E')
	{
		if (ch>='0' && ch <= '9'){
			printf("%c", ch);
		}
		scanf("%c", &ch);
	}

	// Solution 2

	while(1){
		if (ch=='e' || ch == 'E')
			break;
		if (ch>='0' && ch <= '9'){
			printf("%c", ch);
			}
		scanf("%c", &ch);

	}


	return 0;
}



