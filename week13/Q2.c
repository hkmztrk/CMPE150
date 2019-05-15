#include <stdio.h>
#include <stdlib.h>


int main(void){
	int N;
	char sentence[100];
	gets(sentence);
	scanf("%d", &N);
	char temp[50][50];
	int i=0, word_count=0, ch_count=0;

	while(1){
		if(sentence[i]== ' '){
			temp[word_count][ch_count] = '\0';
			word_count++;
			ch_count =0;
		}
		else if(sentence[i]== '\0'){
			word_count++;
			break;
		}
		else{
			temp[word_count][ch_count] = sentence[i];
			ch_count++;
		}
		i++;
	}
	int k;
	for(k=0; k < word_count; k++){
		if(k != N-1){
			printf("%s ", temp[k] );
		}
	}


	return 0;
}
