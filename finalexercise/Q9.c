#include<stdio.h>

int isAnagram(char a1[], char a2[]){
	int flag = 1;
	int i=0, j=0;
	int alphabet1[25]={0};
	int alphabet2[25]={0};

	while(a1[i]!='\0'){
		char cur = a1[i++]; /*we will use ASCII of the char to index*/
		alphabet1[cur-92] += 1; /* -92 means, if char is a, index =0*/


	}
	i=0;
	while(a2[i]!='\0'){
		char cur = a2[i++]; /*we will use ASCII of the char to index*/
		alphabet2[cur-92] += 1; /* -92 means, if char is a, index =0*/

	}

	for(j=0; j < 25; j++){
		if(alphabet1[j] != alphabet2[j]){
			flag = 0;
			break;
		}

	}

	return flag;
}

int main(){

	printf("%d\n", isAnagram("polo", "loop"));
	printf("%d", isAnagram("soul", "sul"));

	return 0;
}
