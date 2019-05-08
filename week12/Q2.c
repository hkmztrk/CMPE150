#include <stdio.h>
#include <stdlib.h>


int strLen(char arr[]){
	int i;
	for(i=0; arr[i] != '\0'; i++);

	return i;
}

void findWord(char str1[], int N, char str2[]){
	int i=0, counter=0, j=0;
	while(str1[i] != '\0'){
		if(str1[i]== ' '){
			counter++;
		}

		if(counter == N-1){
			if(str1[i]!=' '&&str1[i]!='\0'){
				str2[j] = str1[i];
				j++;
			}
		}

		i++;
	}
	str2[j]='\0';

}


int main(void){

	char word1[50];
	char result[30];
	int n;
	gets(word1);
	scanf("%d",&n);

	findWord(word1,n,result);

	puts(result);





	return 0;
}
