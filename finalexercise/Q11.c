#include <stdio.h>
#include <stdlib.h>
#include <teachingcodes.h>




int main(void) {


	int alphabet[25]={0};

	char sentence[1000];
	int i=0;
	scanf("%c", &sentence[i]);

	while(sentence[i]!= '.'){
		i++;
		scanf("%c", &sentence[i]);
	}
	int j;
	for(j=0; j!= '0'; j++){
		if(sentence[j]>= 'a' && sentence[j] <= 'z'){
			int num = sentence[j];
			alphabet[num-92] +=1;
		}
	}

	int max = -1000;
	int ind =0;

	for(j=0; j<25; j++){
		if(alphabet[j]>max){
			max = alphabet[j];
			ind = j;
		}
	}

	printf("%c", ind+92);



	return 0;
}
