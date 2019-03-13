
#include <stdio.h>
#include <stdlib.h>


int main(void) {

	char ch1, ch2;
	scanf("%c%c", &ch1, &ch2);
	int i;
	if (ch1 < ch2){
		for(i=ch1; i <= ch2; i++){
			printf("%c", i);
		}
	}
	else
	{
		for(i=ch1; i >= ch2; i--){
			printf("%c", i);
		}
	}


	return 0;
}
