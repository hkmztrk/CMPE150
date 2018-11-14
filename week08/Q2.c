#include <stdio.h>

char toUpper(char myc){
	if (myc >= 'a' && myc <= 'z'){
		myc -= 32;
	}

	return myc;
}


int main(void){

	char c;
	scanf("%c", &c);

	while(c != '\n'){

		printf("%c", toUpper(c));
		scanf("%c", &c);
	}

	return 0;
}
