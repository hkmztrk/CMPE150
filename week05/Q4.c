
#include <stdio.h>
#include <stdlib.h>


int main(void) {

	char c;
	scanf("%c", &c);

	while(c!= 'E' && c!= 'e'){
		if(c>= '0' && c <= '9')
			printf("%c",c);

		scanf("%c", &c);

	}

	/* Alternative 
	while(1){
		if(c>= '0' && c <= '9')
			printf("%c",c);

		scanf("%c", &c);

		if(c=='e' || c== 'E')
			break;
	}

	*/



	/* Alternative II

	while(1){
		scanf("%c", &c);

		if(c=='e' || c== 'E')
			break;

		if(c>= '0' && c <= '9')
			printf("%c",c);

	}

	*/



	return 0;
}
