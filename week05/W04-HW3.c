
#include <stdio.h>
#include <stdlib.h>


int main(void) {

	char a;
	scanf("%c", &a);

	if((a>='a' && a <= 'z') || (a>='A' && a <= 'Z')){
		if(a== 'a' || a == 'e' || a== 'i' || a == 'o' ||  a== 'u' ||
				a== 'A' || a == 'E' || a== 'I' || a == 'O' ||  a== 'U'){
			printf("vowel");
		}
		else{
			printf("consonant");
		}
	}
	else{
		printf("not alphabet");
			}
			
	return 0;
}
