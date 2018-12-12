#include <stdio.h>
#include <stdlib.h>
#define LEN 21


int strlen(char arr[]){
	int i;
	for(i=0; arr[i]!= '\0'; i++);

	return i;
}

int main(void){

	char str[50];
	fgets(str, 50, stdin);

	printf("length: %d", strlen(str)-1);



	return 0;
}
