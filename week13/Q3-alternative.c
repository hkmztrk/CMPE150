

#include <stdio.h>
#include <stdlib.h>

int strLen(char arr[]){
	int i;
	for(i=0; arr[i]!= '\0'; i++);

	return i;
}

int main(void){

	char sentence[150];
	char word[30];
	int num;
	fgets(sentence, 150, stdin);
	scanf("%d", &num);

	int i, space=0, inds, flags=0, inde;

	for(i=0; i < strLen(sentence)-1; i++){
		if(sentence[i] == ' '){
			space +=1;
		}

		if(space == num-1 && flags==0){
			inds=i;
			flags=1;
		}

		if(space == num){
			inde=i;
			break;
		}
	}

	for(i=0; i < inde-inds; i++){
		 word[i] = sentence[inds+i];
	}

	puts(word);


	return 0;
}
