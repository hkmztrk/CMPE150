#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int strCmp(char str[], char str2[] )
{
    int i = 0;
    int flag = 0;
    while (flag == 0)
    {

        if (str[i] > str2[i])
        {
            flag = 1;
        }
        else if (str[i] < str2[i])
        {
            flag = -1;
        }

        if (str[i] == '\0')
        {
            break;
        }

        i++;
    }
    return flag;
}

int main(void){

	char sentence[100];
	gets(sentence);
	int N;
	scanf("%d", &N);

	int i=0;
	char temp [50][50];
	int word_count=0, ch_count =0;
	while(1){

		if(sentence[i]==' '){
			temp[word_count][ch_count] = '\0';
			word_count++;
			ch_count =0;
			i++;
		}
		else if(sentence[i]== '\0'){
			temp[word_count][ch_count] = '\0';
			word_count++;
			break;
		}
		else{
			temp[word_count][ch_count] = sentence[i];
			ch_count++;
			i++;
		}

	}


	printf("%s", temp[N-1]);





	return 0;
}
