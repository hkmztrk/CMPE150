#include <stdio.h>
#include <stdlib.h>
#define BOARD 8

struct Student{
	int id;
	float mt1;
	float mt2;
	float final;
	char letter;
};


char get_grade(float f1, float f2,float f3){
	float avg = f1*0.3 + f2* 0.3 + f3* 0.4;

	if(avg > 75)
		return 'A';
	else if(avg > 50 && avg <= 75)
		return 'B';
	else if(avg > 25 && avg <= 50)
			return 'C';
	else
			return 'F';

}

int main(void){

	int N;
	scanf("%d", &N);
	struct Student cmpe[N];

	int i;
	for(i=0; i < N; i++){
		scanf("%f%f%f", &cmpe[i].mt1,&cmpe[i].mt2, &cmpe[i].final );
		cmpe[i].id = 1000 + i;
		cmpe[i].letter = 'I';
	}

	for(i=0; i < N; i++){
		cmpe[i].letter = get_grade(cmpe[i].mt1,cmpe[i].mt2, cmpe[i].final);
		printf("%c", cmpe[i].letter);
	}


	return 0;
}
